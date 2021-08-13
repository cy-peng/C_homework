#include<stdio.h>
int main(){
	int a,b,i,z,temp,temp2;
	int n;
	int array[10] = {0};
	printf("½Ð¿é¤JA:B ");
	scanf("%d%d",&a,&b);
	
	for(i=a;i<=b;i++)
	{ z=i;
	 while(z!=0) {
	 	temp=z%10;
        array[temp]++; 
        temp2=z/10;
        z=temp2;
    }	
	}
   for(n=0;n<10;n++) {
        if(array[n]!=0)
            printf ("%d,",array[n]);
        if(array[n]==0)
         printf ("%d,",array[n]);
   } return 0;

}

