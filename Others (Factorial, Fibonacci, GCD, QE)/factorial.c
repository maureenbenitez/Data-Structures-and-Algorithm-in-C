#include<stdio.h>

int factorial(void);

int main(){
	factorial();
	
	return 0;
}

int factorial(void){
	int num, fact, f = 1, i;
	
	//accepts positive integer
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	//will multiply each digit until 1 is the factorial
	for (i = 1; i <= num; i++){
		f = f * i;	
	}
	printf("\nThe Factorial of %d is %d.\n", num, f);
	
}