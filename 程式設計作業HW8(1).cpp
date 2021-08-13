#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
main(){
  	FILE *fptr,*tptr;
  	char ch,input[20],inArr[20],enArr[20],deArr[20];
  	int i=0,j=0,k=0;
  	fptr=fopen("input1.txt","r");
  	
  	while ((ch=fgetc(fptr))!=EOF){
   		inArr[i]=ch;
   		i++; 
  	}
  	fclose(fptr);
  	printf("請輸入一個字串,輸入完畢按Enter:\n");
 	scanf("%s",&input);
 	printf("\n");
 
 	int len=strlen(input); 
 
  	for (j=len;j<i;j++) input[j]=input[j%len]; 
 	
	 for (j=0;j<i;j++) {
  		enArr[j]=inArr[j]+input[j];
  		printf("%c",enArr[j]);
 	}
 	printf("\n");
 	fptr=fopen("output.txt","w");
 	for (j=0;j<i;j++) {
  		deArr[j]=enArr[j]-input[j];
  		fprintf(fptr,"%c",deArr[j]);
 	}
 	fclose(fptr);
}
