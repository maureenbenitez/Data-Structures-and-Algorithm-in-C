#include<stdio.h>
#include<string.h>

#define MAX_SIZE 100

int merging(void);
void mergingreference(char[], char[]);

int main() {
	merging();
	
	return 0;
}

int merging(void){
	char array1[MAX_SIZE], array2[MAX_SIZE];
	
	puts("Enter first string: ");
	gets(array1);
	
	puts("Enter second string: ");
	gets(array2);
	
	mergingreference(array1, array2);
	printf("\nString after merging: %s", array1);
	printf("\n");
}

void mergingreference(char array1[], char array2[]) {
	int i, j;
	i = strlen(array1);
	for (j = 0; array2[j] != '\0'; i++, j++) {
		array1[i] = array2[j];
	}
	array1[i] = '\0';
}