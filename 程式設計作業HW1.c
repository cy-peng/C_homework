#include <stdio.h>

/*
我把1-1與1-2寫在同個程式中 
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
 	printf("首先進行加密，請輸入加密的KEY_NUMBER:");
	scanf("%d",&en);
 	for(i = 0;s[i];i++)
 		s[i] += en;
 	printf("加密的結果是:");
 	for(i = 0;s[i];i++)
 		printf("%c",s[i]);
 	printf("\n");
 	printf("再來進行解密\n");
 	for(i = 0;s[i];i++)
 		s[i] -= en;
 	fprintf(out,"%s",s);
 	printf("解密完成，解密結果是:%s\n",s);
 	printf("結果已經存入output文字檔\n");
 	fclose(in);
 	fclose(out);
 	return 0;
}
