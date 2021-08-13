#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

int main(){ 
int i=0,j=0,a[15][6]={0},count; 
char s[15],*tmp; 
float sum=0;
FILE *fptr,*tptr; 
fptr= fopen("input2.txt","r"); 
tptr=fopen("output.txt","w");
	while(fgets(s,999,fptr)!=NULL){ //存入陣列 
	tmp = strtok(s," "); 
		while(tmp!=NULL){ 
		a[i][j++]=atoi(tmp); 
		tmp = strtok(NULL," "); 
		} 
	j=0; 
	i++; 
	} 

	for(i=0;i<15;i++){ 			//平均分數 
		for(j=1;j<4;j++){ 
		sum+=a[i][j];
		a[i][4]=sum/3.0; 
		} 
	sum=0;
	}
		for(i=0;i<15;i++){		//排名 
		count=1;
			for(j=0;j<15;j++){
			if(a[i][4]<a[j][4])
			count++;
			}
		a[i][5]=count;
	}						
	for(i=0;i<15;i++){ 			//印出來 
		for(j=0;j<6;j++){ 
		fprintf(tptr,"%d ",a[i][j]);
	} 
	fprintf(tptr,"\n");
   	}
	fclose(fptr);
 	fclose(tptr);
} 

