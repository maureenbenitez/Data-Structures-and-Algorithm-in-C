#include<stdio.h>
#include<stdlib.h>
#define QMAX_SIZE 10

int linearqueue(void);

void enqueue();
void dequeue();
void displayq();

int array[QMAX_SIZE];
int Rear = -1;
int Front = -1;

int main() {
    linearqueue();
	
	return 0; 
} 

int linearqueue(void) {
	int ch;
    while (1) {
        printf("[1]- Enqueue\n");
        printf("[2]- Dequeue\n");
        printf("[3]- Display Queue\n");
        printf("[4]- Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
            	enqueue();
            	break;
            case 2:
	            dequeue();
	            break;
            case 3:
            	displayq();
            	break;
            case 4:
            	exit(0);
            	default:
            	printf("Invalid choice! \n\n");
        } 
    }
	
}
 
void enqueue() {
    int insert_item;
    if (Rear == QMAX_SIZE - 1)
       printf("Overflow! \n");
    else {
        if (Front == -1)
	        Front = 0;
	        printf("Enqueue element: ");
	        scanf("%d", &insert_item);
	        Rear = Rear + 1;
	        array[Rear] = insert_item;
	        printf("\n");
    }
} 
 
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow! \n");
        return ;
    }
    else
    {
        printf("Dequeue element: %d\n", array[Front]);
        Front = Front + 1;
        printf("\n");
    }
} 
 
void displayq() {
    int i;
    if (Front == - 1)
        printf("Empty Queue! \n");
    else {
        printf("Queue: ");
        for ( i = Front; i <= Rear; i++)
            printf("%d ", array[i]);
        printf("\n");
    }
} 
