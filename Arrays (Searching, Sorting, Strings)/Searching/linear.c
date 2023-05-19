#include<stdio.h>
#define MAX_SIZE 100

int linearsearch(void);
  
int main(){
    linearsearch();
  
    return 0;
}

int linearsearch(void) {
	int i, key, num, array[MAX_SIZE];
	num = sizeof(array);
	
    printf("Enter the number of elements: ");
    scanf("%d", &num);
     
    printf("Enter %d integer elements: ", num);
    for(i = 0; i < num; i++)
        scanf("%d", &array[i]);
     
    printf("Enter the element to search: ");
    scanf("%d", &key);
     
    for(i = 0; i < num; i++)
        if(array[i] == key)
            break;
     
    if(i < num)
        printf("\n%d found! At index %d.\n", key, i);
    else
        printf("\n%d not found! Element not present on the list.\n", key);
        
}