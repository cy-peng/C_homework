#include <stdio.h> 
#include <stdlib.h>
int main( )
{
	int n1,n2,GCD,length,many,a,nn1,nn2,cm;
	printf("�п�J����Ϊ���(����):");
	scanf("%d",&n1);
	printf("�п�J����Ϊ��e(����):");
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
	
	printf("�ֻ̤ݭn%d�ӬۦP�������\n",many);
	printf("�Ʀ������%d�����������",length);

}
	
	
