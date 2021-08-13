#include <stdio.h>

int main( ) {
	int n;
	do {						
		printf("Imput a number for the * in a line (1~100): ");
    	scanf("%i",&n); 
	} while (n>100 || n<1);
	
	int lines=100/n;
	int last=100%n;
	
	for (int i=0; i<lines; i++) {	
		for (int j=0; j<n; j++) printf("*");
		printf("\n");
	}
	for (int k=0; k<last; k++) printf("*"); 
}
