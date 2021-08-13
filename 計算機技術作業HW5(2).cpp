#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int i,j,n,count,total,pre1=3,pre2=3;
	printf("please enter a number : ");
	scanf("%d",&n);
   for(i=2;i<=n;i++)
    {
    	count=0;
	for(j=2;j<=i;j++)
     {if (i%j==0)
      count++;
  }
	if(count==1)
{
	 	 pre2=i;
	if (pre2-pre1==2)
	 {
     printf("(%d,%d)",pre1,pre2);
     total++;
     total/2;
	 }
	 pre1=pre2;
}
}
printf("\n");
printf("Total is %d",total);}
          




