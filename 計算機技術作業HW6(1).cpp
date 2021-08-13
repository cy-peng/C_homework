#include<stdio.h>
int main()
{
int i,j,k,total,count=0,matrix1[10][10],matrix2[10][10],add[10][10],size;
printf("Please input the size of matrix:");
scanf("%d",&size);
printf("Please input matrix1:\n");
for(i=1;i<=size;i++)
{
	for(j=1;j<=size;j++)
	{
    scanf("%d",&matrix1[i][j]);
		}			
}
printf("Please input matrix2:\n");
for(i=1;i<=size;i++)
{
	for(j=1;j<=size;j++)
    scanf("%1d",&matrix2[i][j]);
}
printf("matrix1*matrix2=\n");
for(i=1;i<=size;i++){
	for(j=1;j<=size;j++){
			add[i][j]=0;
		for(k=1;k<=size;k++){
			add[i][j]+=matrix1[i][k]*matrix2[k][j];
			}
	printf("%5d",add[i][j]);
			count++;
		}
			if(count%size==0)
			printf("\n");
        }  
}


