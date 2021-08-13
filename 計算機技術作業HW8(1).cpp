#include<stdio.h>
#include<string.h> 
int main()
{
int i,key[3][3],len,j,k,sum,segment;
char input[100],ch;

printf("Please input a 3x3 key matrix:");
	for(i=0;i<3;i++){
		for(j=0;j<=2;j++){
			scanf("%d",&key[i][j]);
		}}
printf("Please input a string:");
	scanf("%*c%s",input);
	printf("The cipher is");
	len=strlen(input);
	segment=len/3;
	for(i=0;i<segment;i++){
   		for(j=0;j<3;j++){
   			sum=0;
   			for(k=0;k<3;k++)
   			sum=sum+key[j][k]*((int)input[i*3+k]-(int)'A');
   			sum=sum%26;
   			ch=(char)((int)'A'+sum);
   			printf("%c",ch);
		   }}
	
}
