#include <stdio.h> 
main( )
{
   int a,b,c;
   printf("�п�J�T���Ϊ��T����� : ");
   printf("a = ");
   scanf("%d",&a);
   printf("b = ");
   scanf("%d",&b);
   printf("c = ");
   scanf("%d",&c);
   if ((a*a+b*b==c*c)||(c*c+b*b==a*a)||(a*a+c*c==b*b))
     printf("���T���ά������T����");     
   if  (a==b&&b==c)
     printf("���T���ά����T����");
   else if (a==b||b==c||c==a)
     printf("���T���ά����y�T����");
   
 } 
