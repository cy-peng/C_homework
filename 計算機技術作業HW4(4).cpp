#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int i,n,j,k,m;
	printf("please enter a number : ");
	scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {   
	    for(j=n-i;j>0;j--)
          printf(" ");
	    for(k=1;k<=i;k++)
	      printf("%d",k%10);
	    for(m=i-1;m>=1;m--)
	      printf("%d",m%10);
	    printf("\n");
	
     }
   system("pause");
   return 0;
}
