#include<stdio.h>
#include<string.h>
int main()
{int i,count=0,numa,numb,x,j;
char in1[16],in2[16];
while(1){
printf("Please input the string1:");
scanf("%s",in1);
printf("Please input the string2:");
scanf("%s",in2);
numa=strlen(in1);
numb=strlen(in2);
for(i=0;i<numa;i++){
	if(in1[i]==in2[0])
	x=0;
		for(int j=1;j<numb;j++){
			if(in1[i+j]!=in2[j]){
			x=1;
			break;}}
	if(j<numb&&x!=1) count++;
	 }
if(count!=0) {
printf("String2 is a substring of string1\n");
printf("Repeat %d times\n",count);}
if(count==0) printf("String2 is not a substring of string1\n");
count=0;}}
