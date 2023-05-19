#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int traversal(void);

int main() {
	traversal();

	return 0;	
}
	
int traversal(void) {
	char str [MAX_SIZE];
	int i, l;
	
	printf("Enter a string: ");
	gets(str);
	
	l = strlen(str);
	
	printf("\nString after traversal: \n");
	for (i=0; i<l; i++) {
		printf("[%i]%c\n", i, str[i]);
	}
}