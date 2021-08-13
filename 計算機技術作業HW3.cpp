#include <stdio.h>
#include <stdlib.h>
main( )
{int i,n1,n2,sum;
 char again='Y';
 sum=0;
 while(again=='Y'||again=='y')
 {
 printf("enter mumber1 :");
 scanf("%d",&n1);
 printf("enter mumber2 :");
 scanf("%d",&n2);sum=0;
 if (n1>n2)
  {
  printf("Error!!Number1 > Number2!!\n");continue;}
 if (n1<n2)
  {for(i=n1;i<=n2;i++) 
       {
	    sum=sum+i;
       	}
		   		
 printf("Sum = %d\n",sum);
 printf("Again(Y/N)??");}
 scanf("%*c%c",&again);
 
 }
 return 0 ;
}
 

