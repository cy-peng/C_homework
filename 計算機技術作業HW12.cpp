#include<stdio.h>
	int GCD(int n1,int n2){
	while(n1!=0&&n2!=0)
	{
	if(n1>n2)
	 n1=n1%n2;
	 else
	 n2=n2%n1;
	}
	 return n1+n2;
	}
	void sort_fraction(int(*ptr)[2],int n){
		int i,j,temp1,temp2;
		for(i=1;i<=n-1;i++)
			for(j=0;j<n-i;j++)
				if((float)**(ptr+j)/(*(*(ptr+j)+1))>(float)**(ptr+j+1)/(*(*((ptr+j)+1)+1)))
				{
				temp1=**(ptr+j);
				temp2=*(*(ptr+j)+1);
				**(ptr+j)=**(ptr+j+1);
				*(*(ptr+j)+1)=*(*(ptr+j+1)+1);
				**(ptr+j+1)=temp1;
				*(*(ptr+j+1)+1)=temp2;
				}
	}
int main(){
	int n,i,j,temp,d,nu,current=0,arr[200][2];
	float pre,next;
	printf("Please input a number:");
	scanf("%d",&n);
	for(d=2;d<=n;d++)
		for(nu=1;nu<d;nu++)
		if(GCD(d,nu)==1)
		{
			arr[current][0]=nu;
			arr[current][1]=d;
			current++;
		}
		sort_fraction(arr,current);
		printf("0");
		for(i=0;i<current;i++)
		printf(",%d/%d",arr[i][0],arr[i][1]);
		printf(",1(total numbers:%d)\n",current+2);
	}

