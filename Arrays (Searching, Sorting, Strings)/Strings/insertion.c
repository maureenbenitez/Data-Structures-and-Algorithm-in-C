#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX_SIZE 100

int insertion(void); 

int main(void) {
	insertion();
	
	return 0;
}

int insertion(void){
	char array1[MAX_SIZE], array2[MAX_SIZE], array3[MAX_SIZE];
	int pos, n, m, i = 0, j = 0;
 
	puts("Enter string:");
	gets(array1);
	
	puts("Enter string to insert:");
	gets(array2);
	
	printf("Enter the position from where to insert: (Number: 0 to n)");
	scanf("%d", &pos);
	
   //copying the input string into another array
	while(i <= strlen(array1)) {
		array3[i] = array1[i];
		i++;
	}	
	n = strlen(array2) + strlen(array1);
	m = pos + strlen(array2);
 
    //insert sub-string
	for(i = pos; i < n; i++) {
		if(j < strlen(array2)) {
			array1[i] = array2[j];
			j = j + 1;
		}
		array1[m] = array3[i];
		m = m + 1;
	}
 
	printf("\nString after insertion: %s", array1);
	printf("\n");
}