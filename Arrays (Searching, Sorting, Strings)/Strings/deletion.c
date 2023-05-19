#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h> 
#include <stdlib.h>
#define MAX_SIZE 100
 
int deletion(void);
void deletionreference(char *arr, int a, int b);
 
int main() {
	deletion();
	
	return 0;
	
}

int deletion(void) {
	char array[MAX_SIZE];
	int n, pos, i;
	 
	puts("Enter string: ");
	gets(array);
	
	printf("Enter the position from where to delete: (Number: 0 to n)");
	scanf("%d", &pos);
	
	printf("Enter the number of characters to be deleted: ");
	scanf("%d", &n);
	
	deletionreference(array, n, pos);

}

void deletionreference(char *arr, int a, int b) {
	if ((a + b - 1) <= strlen(arr)) {
		strcpy(&arr[b - 1], &arr[a + b - 1]);
		printf("\nString after deletion: ");
		puts(arr);
		printf("\n");
	}
	else {
		printf("\nInvalid position or number of characters to delete! String deletion failed.\n");
	}
}