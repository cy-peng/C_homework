#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char input[101];
	int len,max,i,j,k,count;
	FILE *DataIn,*DataOut;
	DataIn=fopen("t7.txt","r");
	DataOut=fopen("t8.txt","w");
	if(DataIn!=NULL&&DataOut!=NULL)
	{
		while(fscanf(DataIn,"%s",input)==1)
		{
			max=0;
			len=strlen(input);
			for(i=0;i<=len-1;i++)
			{
				for(j=len-1;j>=i;j--)
				{
					if(input[j]==input[i])
					{
						for(k=0;k<=(j-i)/2;k++)
						if(input[i+k]!=input[j-k])
						break;
						if(k>(j-i)/2)
						{
							if(j-i+1>max)
							{
								max=j-i+1;
								count=1;
							}
							else if(j-i+1==max)
							count++;
							break;
						}
					}
				}
			}
			fprintf(DataOut,"%d,%d\n",max,count);
		}
	}
	fclose(DataIn);
	fclose(DataOut);
	return 0;
}
