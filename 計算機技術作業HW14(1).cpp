#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char word[100][20],input[20],temp[20],temp2;
	int count[100]={0},n=-1,len,i,j;
	FILE *fptr;
	FILE *tptr;
	fptr=fopen("t5.txt","r");
	tptr=fopen("t6.txt","w");
	if(fptr!=NULL&&tptr!=NULL)
	{
		while(fscanf(fptr,"%s",input)==1)
		{	
			len=strlen(input);
			if(input[len-1]=='.'||input[len-1]==',')
			input[len-1]='\0';	
			for(i=0;i<len;i++)if(input[i]<=90&&input[i]>=65&&input[i]!='+') input[i]=(char)((int)input[i]+32);
			for(i=0;i<=n;i++){
				if(strcmp(input,word[i])==0){
				count[i]++;
				break;
				}
		    }
			if(i>n){
				n++;
				strcpy(word[n],input);
				count[n]=1;
				}
		}
	}
		for(i=0;i<=n;i++){
			for(j=i+1;j<=n;j++){
				if(strcmp(word[i],word[j])>0){
					strcpy(temp,word[i]);
					strcpy(word[i],word[j]);
					strcpy(word[j],temp);
					temp2=count[i];
					count[i]=count[j];
					count[j]=temp2;
				}
			}
		}
		for(i=0;i<=n;i++){
				fprintf(tptr,"%s:%d\n",word[i],count[i]);
		}
	fclose(fptr);
	fclose(tptr);
	return 0;
	}
