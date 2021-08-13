#include <stdio.h>
#include<iostream>

int main( ) {
	char a;
	int n;
	printf("Imput A,B,C or D : ");
	scanf("%c",&a);
	do {						
		printf("Imput a number between 1 and 22 : ");
		scanf("%i",&n);
	} while (n>22 || n <1);
	
	switch (a) {
		case 'A':
			n=n+65;
			break;
		case 'B':
			n=n+66;
			break;
		case 'C':
			n=n+67;
			break;
		case 'D':
			n=n+68;
			break;
		default:
			printf("False");
	}
	printf("%c",n) ;
}
