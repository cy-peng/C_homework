#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char input[42];
	int number[2][40]={0},sum[40],len,point,i,j,carry,begin=-1,end=-1;
	for(i=0;i<=1;i++)
	{
		printf("Please input number #%d: ",i+1);
		scanf("%s%*c",input);
		len=strlen(input);
		point=-1;
		for(j=0;j<len;j++)
		if(input[j]=='.')point=j;
		
		if(point=-1)
			for(j=len-1;j>=0;j--)
			number[i][20-len+j]=(int)input[j]-48;
			
		else
		{for(j=point-1;j>=0;j--)
			number[i][20-point+j]=(int)input[j]-48;
		for(j=point+1;j<=len-1;j++)
			number[i][19-point+j]=(int)input[j]-48;
		}
	}
	carry=0;
	for(i=39;i>=0;i--)
	{
		sum[i]=number[0][i]+number[1][i]+carry;
		if(sum[i]>9)
		{
			sum[i]=sum[i]%10;
			carry=1; 
		}
		else carry=0;
	}
	for(i=0;i<=19;i++)
	if(sum[i]!=0){begin=i;break;}
	for(i=39;i>=20;i--)
	if(sum[i]!=0){end=i;break;}
	
	printf("The sum is ");
	if(carry==1)printf("1");
	
	if(begin==-1)printf("0");
	else for(i=begin;i<=19;i++)printf("%d",sum[i]);
	
	if(end!=-1)
	{
		printf(".");
		for(i=20;i<=end;i++)printf("%d",sum[i]);
	}
	system("pause");
	return 0;
	}
	
