#include<stdio.h>
#include<string.h> 
#include<math.h>
int main()
{
	int demical,i,n,j,binary[30],count=0,d=1,sum=0;
	char bin[30];
	printf("Please input a demical number:");
	scanf("%d",&demical);
	for(i=0;i<30;i++){
		binary[i]=demical%2;
		count++;
		demical=demical/2;
		if(demical==1) break;
	}printf("1");
	for(j=count-1;j>=0;j--){
		printf("%d",binary[j]);
	}
	printf("\nPlease input a binary number");
	scanf("%s",bin);
	n=strlen(bin);
	for(i=0;i<n;i++){
		bin[i]=(int)bin[i]-48;
	}
		for(i=n-1;i>=0;i--){
			sum+=bin[i]*d;
			d*=2;
	}
		printf("%d",sum);
}
	
	
