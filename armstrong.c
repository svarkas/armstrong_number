#include <stdio.h>
#include <stdlib.h>

int mypow(int a, int b){
	int i;
	int result=a;
	for(i=1; i<b; i++){
		result=result*a;
	}

	return result;
}

int main(int argc, char *argv[]){
	int i = 1 ;
	int digit_count = 1;
	int input = atoi(argv[1]);

	for (i=1; i<=input; i/10){
		digit_count++;
		i *= 10;
	}

	while( digit_count > 0 ){
		printf("%d\n", input / i );
		input %= i ;
		i /= 10;
		digit_count--;
	}
	printf("\n");
	return 0;
}
