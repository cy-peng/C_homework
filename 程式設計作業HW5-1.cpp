#include <stdio.h>
main(){
	int i=0,j;
	char word[30];
	printf("��J�@�ӳ�r : ");
	scanf("%s",word);
do{ 
	i++;
}while(word[i]!='\0');
for(j=i-1;j>-1;j--)
		printf("%c",word[j]);
}
