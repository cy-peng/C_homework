#include <stdio.h>
main()
 {
 	int j=1,i;
while(j<=9){
i=1;
	while(i<=9){
		printf("%-d*%-d=%-2d  ",i,j,j*i);
		i++;
	}
printf("\n");j++;
}
}
