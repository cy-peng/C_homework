#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char input[101];
	int len,max=0,i,j,k,index,list[100][2];
	printf("Please enter a string");
	scanf("%s",input);
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
						index=0;
						list[index][0]=i;
						list[index][1]=j;
					}
					else if (j-i+1==max){
						index++;
						list[index][0]=i;
						list[index][1]=j;
				}
				break;
			}
		}
	}
}
printf("最長回文為:");
for(i=0;i<=index;i++){
	for(j=list[i][0];j<=list[i][1];j++)
	printf("%c",input[j]);
	printf(",");
}
return 0;
}

