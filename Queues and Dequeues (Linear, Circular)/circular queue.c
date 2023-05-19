#include<stdio.h>
#define QMAX_SIZE 10

int circularqueue(void);

int cqarray[QMAX_SIZE];
int Front = -1;
int Rear = -1;

void enqueuecq(int item) {
	if((Front == 0 && Rear == QMAX_SIZE - 1) || (Front == Rear + 1)) {
		printf("Overflow! \n");
		return;
	}
	if(Front == -1) {
		Front = 0;
		Rear = 0;
	}
	else {
		if(Rear == QMAX_SIZE - 1)
			Rear = 0;
		else			
			Rear = Rear + 1;
	}
	cqarray[Rear] = item ;
}

void dequeuecq() {
	printf("\n\n\t\t\t      CIRCULAR DEQUEUE\n\n");
	if(Front == -1) {
		printf("Underflow! \n");
		return;
	}
	printf("Dequeue element: %d", cqarray[Front]);
	if(Front == Rear) {
		Front =- 1;
		Rear =- 1;
	}
	else {
		if(Front == QMAX_SIZE - 1)
		Front = 0;
		else
		Front = Front + 1;
	}
	printf("\n\n");
}

void displaycq() {
	printf("\n\n\t\t\t      DISPLAY CIRCULAR QUEUE\n\n");
	int front_pos = Front, rear_pos = Rear;
	
	if(Front == -1) {
		printf("Empty Queue! \n");
		printf("\n");
		return;	
	}
	printf("Display queue:");
	if(front_pos <= rear_pos )
		while(front_pos <= rear_pos) {
			printf("%d ", cqarray[front_pos]);
			front_pos++;
		}
	else {
		while(front_pos <= QMAX_SIZE - 1) {
			printf("%d ",cqarray[front_pos]);
			front_pos++;
		}
		front_pos = 0;
		while(front_pos <= rear_pos) {
			printf("%d ",cqarray[front_pos]);
			front_pos++;
		}
	}
	printf("\n\n");
}

int main() {
	circularqueue();
	
	return 0;	
}

int circularqueue(void) {
	int ch, item;
	
	do {
		printf("[1]- Enqueue\n");
		printf("[2]- Dequeue\n");
		printf("[3]- Display Queue\n");
		printf("[4]- Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
	
		switch(ch) {
			case 1:
				printf("\n\n\t\t\t      CIRCULAR ENQUEUE\n\n");
				printf("Enqueue element: ");
				scanf("%d", &item);
				enqueuecq(item);
				printf("\n");
				break;
			case 2:
				dequeuecq();
				break;
			case 3:
				displaycq();
				break;
			case 4:
				break;
			default:
				printf("Invalid choice! \n");
		}
	} while(ch != 4);
}
