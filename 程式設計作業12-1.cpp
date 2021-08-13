#include <stdio.h>
#include <stdlib.h>

int upside_down(const char *fname_s, const char *fname_t) {
	FILE          *fp_s = NULL;    // source file handler
	FILE          *fp_t = NULL;    // target file handler 
	unsigned int  x,y;             // for loop counter
	unsigned int  width, height;   // image width, image height
	unsigned char *image_s = NULL; // source image array
	unsigned char *image_t = NULL; // target image array
	unsigned char R, G, B;         // color of R, G, B
	unsigned int y_avg;            // average of y axle
	unsigned int y_t;              // target of y axle
   
	unsigned char header[54] = {
    0x42,        // identity : B
    0x4d,        // identity : M
    0, 0, 0, 0,  // file size
    0, 0,        // reserved1
    0, 0,        // reserved2
    54, 4, 0, 0, // RGB data offset
    40, 0, 0, 0, // struct BITMAPINFOHEADER size
    0, 2, 0, 0,  // bmp width
    0, 2, 0, 0,  // bmp height
//    0, 0, 0, 0,  // bmp width
//    0, 0, 0, 0,  // bmp height
    1, 0,        // planes
    24, 0,       // bit per pixel
//    24, 0,       // bit per pixel
    0, 0, 0, 0,  // compression
    0, 0, 0, 0,  // data size
    18, 11, 0, 0,  // h resolution
    18, 11, 0, 0,  // v resolution 
//    0, 0, 0, 0,  // h resolution
//    0, 0, 0, 0,  // v resolution 
    0, 0, 0, 0,  // used colors
    0, 0, 0, 0   // important colors
	};
  
	unsigned int file_size;           
	unsigned int rgb_raw_data_offset; 
  
	fp_s = fopen(fname_s,"r");
	if (fp_s == NULL) {
  		printf("fopen fp_s error\n");
    	return -1;
	}
 
	fseek(fp_s, 10, SEEK_SET);
	fread(&rgb_raw_data_offset, sizeof(unsigned int), 1, fp_s);
	
	fseek(fp_s, 18, SEEK_SET); 
	fread(&width,  sizeof(unsigned int), 1, fp_s);
	fread(&height, sizeof(unsigned int), 1, fp_s);
// move offset to rgb_raw_data_offset to get RGB raw data
	fseek(fp_s, rgb_raw_data_offset, SEEK_SET);
     
	image_s = (unsigned char *)malloc((size_t)width * height * 3);
	if (image_s == NULL) {
    	printf("malloc images_s error\n");
   		return -1;
  	}
    
	image_t = (unsigned char *)malloc((size_t)width * height * 3);
	if (image_t == NULL) {
   		printf("malloc image_t error\n");
    	return -1;
	}
 
	fread(image_s, sizeof(unsigned char), (size_t)(long)width * height * 3, fp_s);
   

   
	for(y = 0; y != height; ++y) {
     	for(x = 0; x != width; ++x) {
       		R = *(image_s + (width * y + x) + 2);
       		G = *(image_s + (width * y + x) + 1);
      		B = *(image_s + (width * y + x) + 0);
      

       		*(image_t + 3 * (width * y + x) + 2) = 255-R;
       		*(image_t + 3 * (width * y + x) + 1) = 255-G;
      		*(image_t + 3 * (width * y + x) + 0) = 255-B;
     	}
  	}
   
 // write to new bmp
   	fp_t = fopen(fname_t,"w");
  	if (fp_t == NULL) {
     	printf("fopen fname_t error\n");
      	return -1;
    }
      
     // file size  
    file_size = width * height * 3 + rgb_raw_data_offset;
     header[2] = (unsigned char)(file_size & 0x000000ff);
    header[3] = (file_size >> 8)  & 0x000000ff;
    header[4] = (file_size >> 16) & 0x000000ff;
     header[5] = (file_size >> 24) & 0x000000ff;
    
     // width
    header[18] = width & 0x000000ff;
     header[19] = (width >> 8)  & 0x000000ff;
     header[20] = (width >> 16) & 0x000000ff;
     header[21] = (width >> 24) & 0x000000ff;
    
    // height
    header[22] = height &0x000000ff;
     header[23] = (height >> 8)  & 0x000000ff;
     header[24] = (height >> 16) & 0x000000ff;
    header[25] = (height >> 24) & 0x000000ff;
   
  // write header
   fwrite(header, sizeof(unsigned char), rgb_raw_data_offset, fp_t);
   // write image
    fwrite(image_t, sizeof(unsigned char), (size_t)(long)width * height * 3, fp_t);
    
     fclose(fp_s);
     fclose(fp_t);
     
     return 0;
}
 
int main() {
   upside_down("lena.bmp", "out.bmp");
}

