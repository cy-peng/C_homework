#include<stdio.h>
int main()
{
	int y,week,cen,count=0;
	printf("Please input the century:");
	scanf("%d",&cen);
	for(y=cen*100;y>(cen-1)*100;y--){
	week=(y+(int)((y-1)/4)-(int)((y-1)/100)+(int)((y-1)/400))%7;
	int x=1;
	do{
	if(x==2||x==4||x==6||x==8||x==9||x==11) week+=31;week%=7;
	if(x==5||x==7||x==10||x==12) week+=30;week%=7;
	if(x==3){if(y%4==0&&y%100!=0||y%400==0) week+=29; else week+=28;
	week%=7;}
	x++;
	if(week==0) count++;
	}while(x<=12);
	}printf("%d times",count);}
