#include <stdio.h> 
main( )
{
   int a,b,c;
   printf("請輸入三角形的三個邊長 : ");
   printf("a = ");
   scanf("%d",&a);
   printf("b = ");
   scanf("%d",&b);
   printf("c = ");
   scanf("%d",&c);
   if ((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
     printf("此三角形為直角三角形");     
   if  (a==b&&b==c)
     printf("此三角形為正三角形");
   else if (a==b||b==c||c==a)
     printf("此三角形為等腰三角形");
   
 } 
