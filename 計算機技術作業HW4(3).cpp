#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int n1,n2;
	printf("please input two integers : ");
	scanf("%d %d",&n1,&n2);
	while(n1!=0&&n2!=0)
	{if(n1>n2)
	 {
	 n1=n1%n2;
	}
	 else
	 {n2=n2%n1;
	 }
	}
	printf("GCD is ");
	if (n1==0)
	 printf("%d",n2);
	if (n2==0)
	 printf("%d",n1);
}
	
	
