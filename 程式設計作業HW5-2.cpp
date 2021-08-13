#include <stdio.h>
main(){
char bat[30];
float hit=0.0,sum=0.0;
int num,i,j,n;
	printf("Input the players number and record :");
	scanf("%[^\n]",bat);
		for(i=0;i<30;i++){
			if(bat[i]==' ')num=i;
			if(bat[i]=='H') {
				hit+=1;sum+=1;
			}
			if(bat[i]=='O')sum+=1;
			if(bat[i]=='\0') break;
	}
		printf("player ");
		for(j=0;j<num;j++)printf("%c",bat[j]);
		printf("'s record:");
		for(j=num+1;j<i;j++)printf("%c",bat[j]);
		
		printf("\nplayer ");
		for(j=0;j<num;j++)printf("%c",bat[j]);
		printf("'s batting average:%f",hit/sum);
}
