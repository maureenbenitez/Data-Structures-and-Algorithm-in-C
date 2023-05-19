#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int stringsearching(void);

int main() {
	stringsearching();
	
	return 0;
}

int stringsearching(void){
	char array1[MAX_SIZE], array2[MAX_SIZE];
	char *p1, *p2, *p3;
	int i = 0, j = 0, c = 0;

	p1 = array1;
	p2 = array2;
  
	printf("Enter string: ");
	gets(array1);
	
	printf("Enter string to search: ");
	gets(array2);  

	for (i = 0; i < strlen(array1); i++) {
		if (*p1 == *p2) {
	        p3 = p1;
	        for (j = 0; j<strlen(array2); j++) {
	            if (*p3 == *p2) {
	            	p3++; p2++;
	            } 
	            else
	            	break;
	        	}
	        	p2 = array2;
	        	if (j == strlen(array2)) {
	            	c = 1;
	            printf("\nString after searching: Found at index %d. \n", i);
	        	}
	    }
	    p1++; 
	}
	if (c == 0) {
		printf("String not found!");
	}
}