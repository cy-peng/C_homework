#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char word[100][20],input[20];
	int count[100]={0},n=-1,len,i;
	FILE *fptr;
	FILE *tptr;
	fptr=fopen("t3.txt","r");
	tptr=fopen("t4.txt","w");
	if(fptr!=NULL&&tptr!=NULL)
	{
		while(fscanf(fptr,"%s",input)==1)
		{
			len=strlen(input);
			if(input[len-1]=='.'||input[len-1]==',')
			input[len-1]='\0';	
		for(i=0;i<=n;i++)
		if(strcmp(input,word[i])==0){
			count[i]++;
			break;
		}
			if(i>n){
				n++;
				strcpy(word[n],input);
				count[n]=1;
			}
		}
		for(i=0;i<=n;i++)
				fprintf(tptr,"%s: %d\n",word[i],count[i]);
	}
	fclose(fptr);
	fclose(tptr);
	}
