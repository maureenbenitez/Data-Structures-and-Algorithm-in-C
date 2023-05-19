#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_SIZE 100

int stringsorting(void);

int main() {
	stringsorting();
    
    return 0;
}

int stringsorting(void){
	char array[MAX_SIZE], temp;
    int n, i, j;
    
    printf("Enter string: ");
    gets(array);
    
    n = strlen(array);
    for (i = 0; i < n; i++) {
        for (j = 0; j < (n-1); j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("\nString after sorting: %s \n", array);
}