#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int i,j,n,count,total;
	printf("please enter a number : ");
	scanf("%d",&n);
   for(i=2;i<=n;i++)
    {int count=0;
	for(j=2;j<=n;j++)
     {if (i%j==0)
      count++;	
	}
z
	if(count==1)
	 {
	 printf("%d ",i);
	 total++;
	}
}
printf("\n");
printf("Total is %d",total);
}
	
          




