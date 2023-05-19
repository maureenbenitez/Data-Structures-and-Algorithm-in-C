#include<stdlib.h>
#include <stdio.h>
    
int linkedlist(void);
void createlist();
void displaylist();
void insertbegin();
void insertend();
void insertpos();
void deletebegin();
void deleteend();
void deletepos();
 
struct node {
    int info;
	struct node *next;
};

struct node * start = NULL;

int main() {
	linkedlist();
	
	return 0;
}

int linkedlist(void){
    int ch;
    
    while(1){
        printf("[1]- Create list\n");
        printf("[2]- Display list\n");
        printf("[3]- Insert at the beginning\n");
        printf("[4]- Insert at the end\n");
        printf("[5]- Insert at specified position\n");
        printf("[6]- Delete from beginning\n");
        printf("[7]- Delete from the end\n");
        printf("[8]- Delete from specified position\n");
        printf("[9]- Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        
		switch(ch) {
            case 1:
                createlist();
                break;
            case 2:
                displaylist();
                break;
            case 3: 
                insertbegin();
                break;
            case 4:
                insertend();
                break;
            case 5:
                insertpos();
                break;
            case 6:
                deletebegin();
                break;
            case 7:
                deleteend();
            	break;
            case 8:
                deletepos();
                break;
            case 9:
            	exit(0);
            	break;
            default:
                printf("Invalid choice!");
                break;
        }
    }
}

void createlist() {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL) {
        printf("\nOut of memory space! \n\n");
        return;
    }
    printf("Enter the data value for the node: ");
    scanf("%d", &temp -> info);
    temp -> next = NULL;
    if(start == NULL) {
        start = temp;
    }
    else {
        ptr = start;
        while(ptr -> next != NULL) {
            ptr = ptr -> next;
        }
        ptr -> next = temp;
    }
}

void displaylist() {
    struct node *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n\n");
        return;
    }
	else {
        ptr = start;
        printf("\nThe List elements are: ");
        while(ptr != NULL) {
            printf("%d ", ptr -> info );
            ptr = ptr -> next ;
        }
        printf("\n\n");
    }
    
}
void insertbegin() {
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("\nOut of memory space! \n\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp -> info);
    temp -> next = NULL;
    printf("\n");
    if(start == NULL) {
        start = temp;
    }
    else {
    	temp -> next = start;
		start = temp;
    }
}

void insertend() {
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
        
	if(temp == NULL) {
        printf("\nOut of Memory Space! \n\n");
        return;
    }
    printf("\nEnter the data value for the node: ");
    scanf("%d", &temp -> info );
    temp -> next = NULL;
    printf("\n");
    if(start == NULL) {
        start = temp;
    }
    else {
        ptr = start;
        while(ptr -> next != NULL) {
            ptr = ptr -> next ;
        }
        ptr -> next = temp;
    }
}

void insertpos() {
    struct node *ptr, *temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("\nOut of memory space! \n\n");
        return;
    }
    printf("\nEnter the position for the new node to be inserted: ");
    scanf("%d", &pos);
    printf("Enter the data value of the node: ");
    scanf("%d", &temp -> info) ;
  	printf("\n");
    temp -> next = NULL;
    if(pos == 0) {
        temp -> next = start;
        start = temp;
    }
    else {
    	for(i = 0, ptr = start; i < pos - 1 ; i++) { 
			ptr = ptr -> next;
            if(ptr == NULL) {
            	printf("\nPosition not found! \n\n");
                return;
        	}
        }
    	temp -> next = ptr -> next;
        ptr -> next = temp;
    }
}

void deletebegin() {
    struct node *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n\n");
    }
    else {
        ptr = start;
    	start = start -> next ;
        printf("\nThe deleted element is: %d", ptr -> info);
        free(ptr);
    }
}

void deleteend() {
	struct node *temp, *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n\n");
        return;
    }
    else if(start -> next == NULL) {
        ptr = start;
        start = NULL;
        printf("\nThe deleted element is: %d", ptr -> info);
        free(ptr);
	}
    else {
        ptr = start;
        while(ptr -> next != NULL) {
            temp = ptr;
            ptr = ptr -> next;
        }
    	temp -> next = NULL;
    	printf("\nThe deleted element is: %d", ptr -> info);
        free(ptr);
    }
}

void deletepos() {
    int i, pos;
    struct node *temp, *ptr;
    if(start == NULL) {
        printf("\nThe List is empty! \n\n");
        return;
    }
    else {
        printf("\nEnter the position of the node to be deleted: ");
        scanf("%d", &pos);
        if(pos == 0) {
            ptr = start;
            start = start -> next ;
            printf("\nThe deleted element is: %d", ptr -> info);
            free(ptr);
        }
        else {
            ptr = start;
            for(i = 0; i < pos; i++) { 
				temp = ptr; 
				ptr = ptr -> next;
                if(ptr == NULL) {
                	printf("\nPosition not found: \n");
                    return;
				}
			}
            temp -> next = ptr -> next;
			printf("\nThe deleted element is: %d", ptr -> info );
            free(ptr);
        }
    }
}
