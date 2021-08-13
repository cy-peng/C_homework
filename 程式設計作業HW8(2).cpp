#include <stdio.h>
#include <math.h>

float revenue(int t){
	float R=203.265*pow(1.071,t);
	return R;
}

int predict(int earn) {
	for (int i=1;1;i++){
		if (revenue(i)<earn) continue;
		return 1983+i;
	}
}

main(){
	int i;
	printf("%d�~�|�W�L1000 million\n",predict(1000));
	for(i=1984;i<=predict(1000);i++)
		printf("%d�~: %f\n",i,revenue(i-1983));
}
