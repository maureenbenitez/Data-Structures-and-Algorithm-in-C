#include<stdio.h>

int fibonacci(void);

int main(){
	fibonacci();
	
	return 0;
}

int fibonacci(void){
	int num, i, fib, f0 = 0, f1 = 1;
	
	printf("Enter the number of term: ");
	scanf("%d", &num);
	
	printf("\nThe Fibonacci Series of %d are: ", num);
	
	for(i = 0; i < num; i++){
		if(i <= 1)
			fib = i;
		else {
			fib = f0 + f1;
			f0 = f1;
			f1 = fib;
		}
		printf("%d ", fib);
	}
	printf("\n");
	
}