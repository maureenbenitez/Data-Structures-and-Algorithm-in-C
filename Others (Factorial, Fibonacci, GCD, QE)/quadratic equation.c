#include <stdio.h>
#include <math.h>

int quadratic(void);

int main() {
	quadratic();

	return 0;
}
    
int quadratic(void){
	int a, b, c;
	float d, x1, x2;
	
	printf("Standard Form: ax^2 + bx + c\n");
	printf("Enter number for a = ");
	scanf("%d", &a);
	printf("Enter number for b = ");
	scanf("%d", &b);
	printf("Enter number for c = ");
	scanf("%d", &c);
	 
	//discriminant formula
	d = (b * b) - (4 * (a * c));
	printf("\nThe discriminant is %.2f.\n", d);
	  
	if (d < 0){
		printf("Negative discriminant (d<0) - NO SOLUTION!\n");
	}
	else if (d == 0){
	    printf("Zero discriminant (d=0) - UNIQUE SOLUTION!\n");
	    x1 = x2 = (-b + sqrt(0)) / (2 * a);
	    printf("x = %.2f", x1);
	}
	else{
		//quadratic formula
		printf("Positive discriminant (d>0) - TWO SOLUTIONS!\n");
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("x = %.2f , x = %.2f", x1, x2);
	}  	
}