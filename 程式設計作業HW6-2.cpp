#include <stdio.h>
main(){
	int amount,n,i[4];
	printf("��J�W�g���w�s:\n");
	printf("Piels(ID number 1)");
	scanf("%d",&i[0]);
	printf("Coors(ID number 2)");
	scanf("%d",&i[1]);
	printf("Bud(ID number 3)");
	scanf("%d",&i[2]);
	printf("Iron City(ID number 4)");
	scanf("%d",&i[3]);
	do{ 
		printf("Enter the ID number:(If there is no purchase or sold,enter 0)");
		scanf("%d",&n);
		if(n==0){for(int j=0;j<4;j++)
		printf("ID number %d ���w�s: %d \n",j+1,i[j]);
		break;}
		printf("Enter the amount purchase(+)or amount sold(-):");
		scanf("%d",&amount);
		i[n-1]+=amount;
	}while(1);}
