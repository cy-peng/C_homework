#include<stdio.h>
int main(void)
{
	int n;
	int c1=0,c2=0,c3=0,c4=0;
	int sum=0;
	printf("�п�J�����`�H��:");
	scanf("%d",&n);
	
	sum=10000000;
	for(int i=0;i<=n/4;i++)
		for(int j=0;j<=n/7;j++)
			for(int k=0;k<=n/13;k++)
				for(int l=0;l<=n/16;l++)
				{
					if(i*4+j*7+k*13+l*16>=n)
					{
						if(i*2500+j*3800+k*6400+l*7500<sum)
						{
							sum=i*2500+j*3800+k*6400+l*7500;
							c1=i;
							c2=j;
							c3=k;
							c4=l;
						}
					}
				}

	printf("�ֻ̤ݭn%d��\n",sum);
	printf("�|���Ш�%d�x\n",c1);
	printf("�Ӱȥ�Ȩ�%d�x\n",c2);
	printf("�p���ڤh%d�x\n",c3);
	printf("�����ڤh%d�x",c4);
	
}
