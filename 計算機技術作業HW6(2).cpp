#include<stdio.h>
main(){
	char input[11]; 
	int input2[11],i,Y;
	int a1,a2,d1,d2,d3,d4,d5,d6,d7,d8,d9;
	printf("請輸入身份證字號:");
	scanf("%s",input);
	
	for(i=0;i<10;i++)
	{if(i==0){ 
	if (input[0]=='A') {a1=1;a2=0;}
	else if (input[0]=='B') {a1=1;a2=1;}
	else if (input[0]=='C') {a1=1;a2=2;}
	else if (input[0]=='D') {a1=1;a2=3;}
	else if (input[0]=='E') {a1=1;a2=4;}
	else if (input[0]=='F') {a1=1;a2=5;}
	else if (input[0]=='G') {a1=1;a2=6;}
	else if (input[0]=='H') {a1=1;a2=7;}
	else if (input[0]=='I') {a1=3;a2=4;}
	else if (input[0]=='J') {a1=1;a2=8;}
	else if (input[0]=='K') {a1=1;a2=9;}
	else if (input[0]=='L') {a1=2;a2=0;}
	else if (input[0]=='M') {a1=2;a2=1;}
	else if (input[0]=='N') {a1=2;a2=2;}
	else if (input[0]=='P') {a1=2;a2=3;}
	else if (input[0]=='Q') {a1=2;a2=4;}
	else if (input[0]=='R') {a1=2;a2=5;}
	else if (input[0]=='S') {a1=2;a2=6;}
	else if (input[0]=='T') {a1=2;a2=7;}
	else if (input[0]=='U') {a1=2;a2=8;}
	else if (input[0]=='V') {a1=2;a2=9;}
	else if (input[0]=='X') {a1=3;a2=0;}
	else if (input[0]=='Y') {a1=3;a2=1;}
	else if (input[0]=='W')  {a1=3;a2=2;}
	else if (input[0]=='Z') {a1=3;a2=3;}
	else if (input[0]=='O') {a1=3;a2=5;}
} 
	else input[i]=(int)input[i]-'0';
}
	Y=a1+a2*9+input[1]*8+input[2]*7+input[3]*6+input[4]*5+input[5]*4+input[6]*3+input[7]*2+input[8]*1;
   
    
	if ((10-Y%10)%10==input[9])
	printf("身份證字號正確!!");
	else 
	printf("身份證字號錯誤!!");

}
