#include<stdio.h>
#define MAX_SIZE 100

int selectionsort(void);

int main() {
	selectionsort();
	
	return 0;
}

int selectionsort(void) {
	int num, i, j, pos, swap, array[MAX_SIZE];
	num = sizeof(array);
	
	printf("Enter the number of elements: ");
	scanf("%d", &num);
	
	printf("Enter %d integer elements: ", num);
	for (i = 0; i < num; i++)
		scanf("%d", &array[i]);

	for(i = 0; i < num - 1; i++) {
		pos = i;
		
		for(j = i + 1; j < num; j++) {
			if(array[pos] > array[j])
				pos = j;
		}
		if(pos != i) {
			swap = array[i];
			array[i] = array[pos];
			array[pos] = swap;
		}
	}
	printf("\nSorted number array: ");
	
	for(i = 0; i < num; i++)
		printf("%d ", array[i]);
		
	printf("\n");
	
}