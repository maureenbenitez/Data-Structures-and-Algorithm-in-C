#include<stdio.h>
#define MAX_SIZE 100

int bubblesort();

int main(){
	bubblesort();
	
	return 0;
}

int bubblesort() {
	int num, i, j, swap, array[MAX_SIZE];
	num = sizeof(array);
	
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	
	printf("Enter %d integer elements: ", num);
	for (i = 0; i < num; i++)
		scanf("%d", &array[i]);
	
	for (i = 0 ; i < num - 1; i++){
	    for (j = 0 ; j < num - i - 1; j++){
	      	if (array[j] > array[j + 1]) {
		        swap = array[j];
		        array[j] = array[j + 1];
		       	array[j + 1] = swap;
			}
	    }
	}
	printf("\nSorted number array: ");
	
	for (i = 0; i < num; i++)
	    printf("%d ", array[i]);
	    
	printf("\n");
		
}