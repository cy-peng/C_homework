
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
int main( )
{int a,b,c,d,count,out,sum,n1,n2,n3,n4;
while(a==b||b==c||c==d||a==d||a==c||b==d){
srand(time(NULL));
a=rand()%10;
b=rand()%10;
c=rand()%10;
d=rand()%10;

}
printf("%d%d%d%d",a,b,c,d);
while(count!=4){
printf("\nPlease input four digits(0~9):\n");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
count=0;out=0;
if(a==n1)
 count++;
if(a==n2)
 out++;
if(a==n3)
 out++;
if(a==n4)
 out++;
if(b==n2)
 count++;
if(b==n1)
 out++;
if(b==n3)
 out++;
if(b==n4)
 out++;
if(c==n3)
 count++;
if(c==n1)
 out++;
 if(c==n2)
 out++;
 if(c==n4)
 out++;
 if(d==n4)
 count++;
 if(d==n3)
 out++;
  if(d==n2)
 out++;
  if(d==n1)
 out++;
sum++;
printf("The result is %dA%dB",count,out);
}
printf("You got it %d times",sum);
}
