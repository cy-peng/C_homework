#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int n1,n2,GCD,length,many,a,nn1,nn2,cm;
	printf("請輸入長方形的長(公分):");
	scanf("%d",&n1);
	printf("請輸入長方形的寬(公分):");
	scanf("%d",&n2);
	nn1=n1;nn2=n2;
	while(n1!=0&&n2!=0)
	{if(n1>n2)
	 {
	 n1=n1%n2;
	}
	 else
	 {n2=n2%n1;
	 }
	 if(n1==0||n2==0)
	 GCD=n1+n2;
	}
	length=nn1*(nn2/GCD);
	many=(length/nn1)*(length/nn2);
	
	printf("最少需要%d個相同的正方形\n",many);
	printf("排成邊長為%d公分的正方形",length);

}
	
	
