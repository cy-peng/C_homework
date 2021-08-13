#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int i,n;
	printf("please enter a number : ");
	scanf("%d",&n);
	int num[n];
	num[0]=0;num[1]=1;
	printf("0,1,");
	for(i=2;i<n;i++)
	{num[i]=num[i-1]+num[i-2];
	 printf("%d,",num[i]);
	}

   system("pause");
   return 0;
}
