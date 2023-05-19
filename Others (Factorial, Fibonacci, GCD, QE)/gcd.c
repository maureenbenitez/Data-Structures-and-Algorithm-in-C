#include<stdio.h>

int gcd(void);

int main(){
	gcd();
	
	return 0;
}

int gcd(void){
	int num1, num2, r;
	
	//accepts positive integers
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nThe GCD of %d and %d is ", num1, num2);
	
	while (num2 != 0){
		r = (num1 % num2);
		num1 = num2;
		num2 = r;
	}
	printf("%d.\n", num1);	
}
