#include <stdio.h>
main()
 {
 	int day,month,i;
printf("月曆1號為星期 :");
scanf("%d",&day);
printf("幾月 :");
scanf("%d",&month);
printf("\n");
printf("日   一   二   三   四   五   六 \n");
if(day==1)
		printf("     ");
	 if(day==2) 
		printf("          ");
	 if(day==3)
		printf("               ");
	if(day==4)
		printf("                    ");
	if (day==5)
		printf("                         ");
	if (day==6)
		printf("                              ");
if (month==1||month==3||month==5||month==7
||month==8||month==10||month==12)
{for(i=1;i<=31;i++)
	{
	printf("%-5d",i);
	day++;
	if(day%7==0)
	printf("\n");
	}
}
else
{for(i=1;i<31;i++)
	{
	printf("%-5d",i);
	day++;
	if(day%7==0)
	printf("\n");
	}
}
printf("\n\n");
printf("日   一   二   三   四   五   六 \n");
if(day==1)
		printf("     ");
	 if(day==2) 
		printf("          ");
	 if(day==3)
		printf("               ");
	if(day==4)
		printf("                    ");
	if (day==5)
		printf("                         ");
	if (day==6)
		printf("                              ");
if (month+1==3||month+1==5||month+1==7
||month+1==8||month+1==10||month+1==12)
{for(i=1;i<=31;i++)
	{
	printf("%-5d",i);
	day++;
	if(day%7==0)
	printf("\n");
	}
}
else
{for(i=1;i<31;i++)
	{
	printf("%-5d",i);
	day++;
	if(day%7==0)
	printf("\n");
	}
}
}

