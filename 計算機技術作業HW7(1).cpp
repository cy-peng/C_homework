#include<stdio.h>
#include<string.h>
int main(){
	int len,sum=0;
	char card[16];
	do {
		printf("�п�J�d��:");
		scanf("%s",card);
		len=strlen(card);
		for (int i=0;i<len;i++){
			if (card[i]>57 || card[i]<48 || len<15 ||len>16) {
 				printf("Error! �D15��16�ӥd���Ʀr ! ");
				return 0;
			}
		}
		for(int i=0;i<len-1;i++){
 			card[i]=card[i]-48;
 			if(len==15) {
  				if((i+1)%2==0) {
  					card[i]=2*card[i];
  					if (card[i]>9) card[i]=card[i]%10+card[i]/10;  
  				}
  				sum+=card[i];
 			}
 			if(len==16){
  				if((i+1)%2!=0) {
  				card[i]=2*card[i];
  				if (card[i]>9) card[i]=card[i]%10+card[i]/10;  
  				}
  				sum+=card[i];
			}
}
if(((10-sum%10))%10==card[len-1]-48) printf("�d�����T!!\n");
else printf("�d�����~!!\n");
} while(len==15||len==16);
}
