#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	int n,i,sum=0,front,back,both,plus;
	printf("Please input a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>=1&&i<=99)
		{
			if(i==81)
			{sum++;
			printf("%d",i);} 
		}
		else if(i>=100&&i<=999)
		{
		}
		else if(i>=1000&&i<=9999)
		{
			if(i==2025)
			{
			sum++;
			printf(",%d",i);
			}
			else if(i==3025)
			{
			sum++;
			printf(",%d",i);
			}
			else if(i==9801)
			{
			sum++;
			printf(",%d",i);
			}
		}
		else if(i>=10000&&i<=99999)
		{
		
		}
		else if(i>=100000&&i<=999999)
		{
		plus=0;
		front=i/1000;
		back=i%1000;
		both=front+back;
		plus=both*both;
		if(i==plus)
		{
		sum++;
		printf(",%d ",plus);
		}
		} 
		
	}
	printf("\n");
	printf("Total is %d",sum);
	
} 
