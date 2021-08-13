#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int id;
	char name[10];
	int score[3];
	}score_t;
int main() {
	FILE *in,*bfile;
	char inArr[20];
	int i,num;
	char name[10],number[10];
	int ch[10],eng[10],nat[10];
	score_t a;
	
    in=fopen("input3.txt","r");
    bfile = fopen("score.dat","wb");
    while(!feof(in)){
    	fscanf(in,"%d %s %d %d %d",&a.id,a.name,&a.score[0],&a.score[1],&a.score[2]);
		fwrite(&a, sizeof(a), 1, bfile);
	}
	fclose(in);
	fclose(bfile);
	bfile = fopen("score.dat","r");
	printf("Input the id (or 0 for exit):");
	scanf("%d",&num);
	while (num!=0){
		fseek(bfile,28*(num-1),SEEK_SET);
		fread(&a, sizeof(a),1, bfile);
		printf("%d %s %d %d %d\n", a.id,a.name,a.score[0],a.score[1],a.score[2]);
		printf("Input the id (or 0 for exit):");
		scanf("%d",&num);
	}
 	fclose(bfile);
    return 0; 
}

