#include<stdio.h>
#include<string.h>
void check_ISBN10(char arr[10]);
void check_ISBN13(char arr2[13]);
char input[14];
int main()
{

char input[14];
printf("Please input an ISBN code:");
scanf("%s",input);
if(strlen(input)==10)
check_ISBN10(input);
else if(strlen(input)==13)
check_ISBN13(input);
} 
void check_ISBN10(char arr[10])
{
int w=10,i;int a,sum=0,X=10;
for(i=0;i<=10;i++){ 
a=((int)input[i]-(int)'0')*w;
w--; 
sum=sum+a;
}
if(sum%11==0)
printf("The ISBN code is correct!!");
else
printf("The ISBN code is incorrect!!");
}
void check_ISBN13(char arr2[14])
{
int i;int a,sum=0,c=1;
for(i=0;i<=11;i++){
a=((int)arr2[i]-(int)'0')*c;
sum=sum+a;
if(c==1)
   c=3;
else
   c=1;
}if((10-sum%10)%10==(int)arr2[12]-(int)'0')
printf("The ISBN code is correct!!");
else
printf("The ISBN code is incorrect!!");
}
