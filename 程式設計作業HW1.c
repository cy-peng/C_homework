#include <stdio.h>

/*
�ڧ�1-1�P1-2�g�b�P�ӵ{���� 
*/

int main()
{
 	char s[21];
 	int en;
 	FILE *in,*out;
 	in  = fopen("input.txt","r");
 	out = fopen("output.txt","w");
 	int i;
 	fscanf(in,"%s",s);
 	printf("�����i��[�K�A�п�J�[�K��KEY_NUMBER:");
	scanf("%d",&en);
 	for(i = 0;s[i];i++)
 		s[i] += en;
 	printf("�[�K�����G�O:");
 	for(i = 0;s[i];i++)
 		printf("%c",s[i]);
 	printf("\n");
 	printf("�A�Ӷi��ѱK\n");
 	for(i = 0;s[i];i++)
 		s[i] -= en;
 	fprintf(out,"%s",s);
 	printf("�ѱK�����A�ѱK���G�O:%s\n",s);
 	printf("���G�w�g�s�Joutput��r��\n");
 	fclose(in);
 	fclose(out);
 	return 0;
}
