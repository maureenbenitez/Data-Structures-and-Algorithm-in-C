#include <stdio.h>
#define MAX_SIZE 100

int binarysearch(void);

int main(){
	binarysearch();
	
	return 0;
}

int binarysearch(void) {
	int i, low, high, mid, num, key, array[MAX_SIZE];
	num = sizeof(array);
	
	printf("Enter the number of elements: ");
	scanf("%d", &num);

	//input should be sorted
	printf("Enter %d integer elements (in ascending order): ", num);
	for(i = 0; i < num; i++)
		scanf("%d", &array[i]);
		
	printf("Enter the element to search: ");
	scanf("%d", &key);

	low = 0;
	high = num - 1;
	mid = (low + high) / 2;
	
	while (low <= high) {
		if(array[mid] < key)
			low = mid + 1;
		else if (array[mid] == key) {
			printf("\n%d found! At index %d.\n", key, mid);
			break;
		}
		else
			high = mid - 1;
			mid = (low + high) / 2;
	}
	if(low > high)
	printf("\n%d not found! Element not present on the list.\n", key);
	
}