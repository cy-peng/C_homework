#include <stdio.h> 
#include <stdlib.h>
#include <limits.h>
int main( )
{
	int i,n,num;
	int b=INT_MAX;
	int y=0;
	printf("please enter a number : ");
	scanf("%d",&num);
	for(i=1;i<b;i++){
		n=i;
		while (n%2==0)
			n=n/2;
		while (n%3==0)
			n=n/3;
		while (n%5==0)
			n=n/5;
			if(n==1)
			{
			printf("%d,",i);
			y++;
			}
			if(y==num)
			break;
	}
}
