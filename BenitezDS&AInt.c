#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h> 
#include<math.h>

//MACRO DECLARATION
#define MAX_SIZE 100
#define QMAX_SIZE 10
#define BLANK ' '
#define TAB '\t'

//FUNCTION DECLARATION
//MENU
int name(void);
int mainmenu(void);
int linearmenu(void);
int nonlinearmenu(void);

int arraymenu(void);
int sortmenu(void);
int searchmenu(void);
int stringmenu(void);
int stacksmenu(void);
int othersmenu(void);
int recursionmenu(void);
int qdqmenu(void);

//SORTING
int selectionsort(void);
int bubblesort(void);

//SEARCHING
int linearsearch(void);
int binarysearch(void);

//STACKS CONVERSION
int infixtoprefix(void);
int infixtopostfix(void);
void postfixtoprefix();
int postfixtoinfix(void);
int prefixtoinfix(void);
int prefixtopostfix(void);

//STRINGS
int traversal(void);
int insertion(void);
int deletion(void);
void deletionreference(char *arr, int a, int b);
int stringsorting(void);
int stringsearching(void);
int merging(void);
void mergingreference(char[], char[]);

//OTHERS
int factorial(void);
int fibonacci(void);

int gcd(void);
int quadratic(void);

//QUEUE & DEQUEUE
int linearqueue(void);
void enqueue();
void dequeue();
void displayq();

int circularqueue(void);

//LINKED LIST
int linkedlist(void);
void createlist();
void displaylist();
void insertbegin();
void insertend();
void insertpos();
void deletebegin();
void deleteend();
void deletepos();

//TREES
int treetraversal(void);

//GLOBAL VARIABLE DECLARATION
char opnds[MAX_SIZE][MAX_SIZE], oprs[MAX_SIZE];
int  topr = -1, topd = -1;
char stack[MAX_SIZE], str[MAX_SIZE];
char *pop6();
char prefix6[MAX_SIZE];
char stack6[MAX_SIZE][MAX_SIZE];
void push6(char *str6);
int isempty6();
int whitespace6(char symbol);
int top = -1;

int qarray[MAX_SIZE];
int Rear = -1;
int Front = -1;
int cqarray[QMAX_SIZE];


//MAIN METHOD
int main(void) {
	
	name();
	mainmenu();
	
	return 0;
}

//NAME & TITLE
int name(void){
	printf("\n     ==================================================================     \n\n");
	printf("\n\t\t  WELCOME TO DATA STRUCTURES AND ALGORITHM\n\n");                 
	printf("\t\t\t\t    by\n");
	printf("\t\t\t   Maureen A. Benitez\n");
	printf("\t\t\t\t BSIT 2C\n\n");
	printf("\n     ==================================================================     \n\n");
	
	printf("\n\nPress any key to continue.. \n");
	getch();
}

//MAIN MENU
int mainmenu(void) {
	
    char choice;
    while(1) {
    	printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      DATA STRUCTURE\n\n");
        printf("\t\t\t[1]- Linear Data Structure\n");;
        printf("\t\t\t[2]- Non-Linear Data Structure\n");
        printf("\t\t\t[3]- Exit Program\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
                linearmenu();
                break;
            case '2':
            	nonlinearmenu();
                break;			   
            case '3':
                printf("\n\n");
                printf("\t\t\t-- THANK YOU FOR USING THIS PROGRAM! --\n\n");
                exit(0);
                break;
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
    
}

//LINEAR MENU
int linearmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t  LINEAR DATA STRUCTURE\n\n");
        printf("\t\t\t[1]- Arrays\n");;
        printf("\t\t\t[2]- Stacks\n");
        printf("\t\t\t[3]- Queue & Dequeue\n");
        printf("\t\t\t[4]- Linked List\n");
        printf("\t\t\t[5]- Others\n");
        printf("\t\t\t[6]- Exit to Main Menu\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
                arraymenu();
                break;
            case '2':
            	printf("\n\n");
            	stacksmenu();
                break;
			case '3':
				printf("\n\n");
            	qdqmenu();
				break;
			case '4':
				printf("\n\n");
				linkedlist();
				break;
			case '5':
            	othersmenu();
				break;	
			case '6':
                printf("\n");
                name();
                mainmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//NON-LINEAR MENU
int nonlinearmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t NON-LINEAR DATA STRUCTURE\n\n");
        printf("\t\t\t[1]- Trees\n");;
        printf("\t\t\t[2]- Exit to Main Menu\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
            	printf("\t\t\t\t TREE TRAVERSAL\n\n");
                treetraversal();
                break;
			case '2':
                printf("\n");
                name();
                mainmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//ARRAY MENU
int arraymenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t         ARRAYS\n\n");
        printf("\t\t\t[1]- Sorting\n");;
        printf("\t\t\t[2]- Searching\n");
        printf("\t\t\t[3]- Strings\n");
        printf("\t\t\t[4]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
                sortmenu();
                break;
            case '2':
            	searchmenu();
                break;
            case '3':
            	stringmenu();
                break;    
			case '4':
                printf("\n");
                linearmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//SORT MENU
int sortmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      SORTING\n\n");
        printf("\t\t\t[1]- Selection Sort\n");;
        printf("\t\t\t[2]- Bubble Sort\n");
        printf("\t\t\t[3]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
            	printf("\t\t\t     SELECTION SORT\n\n");
                selectionsort();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      BUBBLE SORT\n\n");
            	bubblesort();
                break;
			case '3':
                printf("\n");
                arraymenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//SEARCH MENU
int searchmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      SEARCHING\n\n");
        printf("\t\t\t[1]- Linear Search\n");;
        printf("\t\t\t[2]- Binary Search\n");
        printf("\t\t\t[3]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
            	printf("\t\t\t      LINEAR SEARCH\n\n");
                linearsearch();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      BINARY SEARCH\n\n");
            	binarysearch();
                break;
			case '3':
                printf("\n");
                arraymenu();
                break;			   
            default:
                printf("\t\t\t-- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//STRING MENU
int stringmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      STRINGS\n\n");
        printf("\t\t\t[1]- Traversal\n");;
        printf("\t\t\t[2]- Insertion\n");
        printf("\t\t\t[3]- Deletion\n");
        printf("\t\t\t[4]- Sorting\n");
        printf("\t\t\t[5]- Searching\n");
        printf("\t\t\t[6]- Merging\n");
        printf("\t\t\t[7]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
            	printf("\t\t\t      TRAVERSAL\n\n");
                traversal();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      INSERTION\n\n");
            	insertion();
                break;
            case '3':
            	printf("\n\n");
            	printf("\t\t\t      DELETION\n\n");
            	deletion();
                break;
            case '4':
            	printf("\n\n");
            	printf("\t\t\t      SORTING\n\n");
            	stringsorting();
                break;
			case '5':
            	printf("\n\n");
            	printf("\t\t\t      SEARCHING\n\n");
                stringsearching();
                break;
            case '6':
            	printf("\n\n");
            	printf("\t\t\t      MERGING\n\n");
            	merging();
                break;	    
			case '7':
                printf("\n");
                arraymenu();
                break;			   
            default:
                printf("\t\t\t-- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//STACKS MENU
int stacksmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t         STACKS\n\n");
        printf("\t\t\t[1]- Infix to Prefix\n");;
        printf("\t\t\t[2]- Infix to Postfix\n");
        printf("\t\t\t[3]- Postfix to Prefix\n");
        printf("\t\t\t[4]- Postfix to Infix\n");;
        printf("\t\t\t[5]- Prefix to Infix\n");
        printf("\t\t\t[6]- Prefix to Postfix\n");
        printf("\t\t\t[7]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\t\t\t      INFIX TO PREFIX\n\n");
                infixtoprefix();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      INFIX TO POSTFIX\n\n");
                infixtopostfix();
                break;
            case '3':
            	printf("\n\n");
            	printf("\t\t\t      POSTFIX TO PREFIX\n\n");
                postfixtoprefix();
                break;
	    	case '4':
            	printf("\t\t\t      POSTFIX TO INFIX\n\n");
                postfixtoinfix();
                break;
            case '5':
            	printf("\n\n");
            	printf("\t\t\t      PREFIX TO INFIX\n\n");
                prefixtoinfix();
                break;
            case '6':
            	printf("\n\n");
            	printf("\t\t\t      PREFIX TO POSTFIX\n\n");
                prefixtopostfix();
                break;
			case '7':
                printf("\n");
                linearmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
    
}

//OTHERS MENU
int othersmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t         OTHERS\n\n");
        printf("\t\t\t[1]- Recursion\n");;
        printf("\t\t\t[2]- GCD\n");
        printf("\t\t\t[3]- Quadratic Equation\n");
        printf("\t\t\t[4]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
                recursionmenu();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      GREATEST COMMON DIVISOR\n\n");
            	gcd();
                break;
            case '3':
            	printf("\n\n");
            	printf("\t\t\t      QUADRATIC EQUATION\n\n");
            	quadratic();
                break;    
			case '4':
                printf("\n");
                linearmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
    
}

//RECURSION MENU
int recursionmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      RECURSION\n\n");
        printf("\t\t\t[1]- Factorial\n");;
        printf("\t\t\t[2]- Fibonacci\n");
        printf("\t\t\t[3]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
            	printf("\t\t\t      FACTORIAL\n\n");
                factorial();
                break;
            case '2':
            	printf("\n\n");
            	printf("\t\t\t      FIBONACCI\n\n");
            	fibonacci();
                break;
			case '3':
                printf("\n");
                othersmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//QUEUE DEQUEUE MENU
int qdqmenu(void) {
	
	char choice;
    while(1) {
        printf("\n     ==================================================================     \n\n");
        printf("\t\t\t      QUEUE & DEQUEUE\n\n");
        printf("\t\t\t[1]- Queue\n");;
        printf("\t\t\t[2]- Circular Queue\n");
        printf("\t\t\t[3]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);
        fflush(stdin);
        system("cls");

        switch(choice) {
            case '1':
            	printf("\n\n");
                linearqueue();
                break;
            case '2':
            	printf("\n\n");
            	circularqueue();
                break;
			case '3':
                printf("\n");
                linearmenu();
                break;			   
            default:
            	printf("\n\n");
                printf("\t\t\t   -- Invalid choice! --\n\n");
                break;
        }
    }
	
}

//SORTING
//SELECTION SORT METHOD
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

//BUBBLE SORT
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

//SEARCHING
//LINEAR SEARCH
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

//BINARY SEARCH 
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

//STACKS
//INFIX TO PREFIX CONVERSION
int isFull1() {
    return top == MAX_SIZE - 1;
} 

int isEmpty1() { 
    return top == -1; 
}

void push1(char item) {
    if (isFull1()) 
        return; 
	top++;
	stack[top] = item;
}

int pop1() { 
    if (isEmpty1()) 
        return INT_MIN; 
     
    return stack[top--]; 
}
 
int peek1(){ 
    if (isEmpty1()) 
        return INT_MIN; 
    return stack[top]; 
}
 
int checkIfOperand1(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
}
  
int precedence1(char ch) { 
    switch (ch) { 
    case '+': 
    case '-': 
        return 1; 
    case '*': 
    case '/': 
        return 2; 
    case '^': 
        return 3; 
    } 
    return -1; 
} 

int getPostfix1(char* expression) { 
    int i, j;

    for (i = 0, j = -1; expression[i]; ++i) {  
        if (checkIfOperand1(expression[i])) 
            expression[++j] = expression[i]; 
        else if (expression[i] == '(') 
            push1(expression[i]); 
        else if (expression[i] == ')') { 
            while (!isEmpty1(stack) && peek1(stack) != '(') 
                expression[++j] = pop1(stack); 
            if (!isEmpty1(stack) && peek1(stack) != '(') 
                return -1; // invalid expression              
            else
                pop1(stack); 
        } 
        else { 
            while (!isEmpty1(stack) && precedence1(expression[i]) <= precedence1(peek1(stack))) 
                expression[++j] = pop1(stack); 
            push1(expression[i]); 
        } 

    } 

    while (!isEmpty1(stack)) 
        expression[++j] = pop1(stack); 

    expression[++j] = '\0';    
}

void reverse(char *exp) {
    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0') {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}

void brackets(char* exp) {
    int i = 0;
    while(exp[i]!='\0') {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}

void methods(char *exp){
    int size = strlen(exp);

    reverse(exp);
    brackets(exp);
    getPostfix1(exp);
    reverse(exp);
}

int infixtoprefix(void) {
	char array[MAX_SIZE]; 

    printf("Enter infix expression: ");
    scanf("%s", array);

    methods(array); 

    printf("\nPrefix conversion: ");
    printf("%s\n", array);
}

//INFIX TO POSTFIX CONVERSION
void push2(char x) {
    stack[++top] = x;
}

char pop2() {
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority2(char x) {
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int infixtopostfix(void) {
    char array[MAX_SIZE];
    char *e, x;
    printf("Enter infix expression: ");
    scanf("%s", array);
    printf("\n");
    e = array;
    
    printf("Postfix conversion: ");
    while(*e != '\0') {
        if(isalnum(*e))
            printf("%c",*e);
        else if(*e == '(')
            push2(*e);
        else if(*e == ')') {
            while((x = pop2()) != '(')
                printf("%c", x);
        }
        else {
        	
            while(priority2(stack[top]) >= priority2(*e))
                printf("%c", pop2());
            push2(*e);
        }
        e++;
    }
    
    while(top != -1) {
        printf("%c", pop2());
    }
    printf("\n");
}

//POSTFIX TO PREFIX CONVERSION
void push3(char c) {
	stack[++top] = c;
}

char pop3() {
	return stack[top--];
}

int checkIfOperand3(char ch) {
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int isOperator3(char x) {
	switch (x) {
		case '+':
		case '-':
		case '/':
		case '*':
    	return 1;
	}
	return 0;
}

void postfixtoprefix() {
	int n, i, j = 0;
	char c[20];
	char a, b, op;

	printf("Enter postfix expression: ");
	scanf("%s", str);

	n = strlen(str);

	for (i = 0; i < MAX_SIZE; i++)
		stack[i] = '\0';
		
	printf("\nPrefix conversion: ");

	for (i = n - 1; i >= 0; i--) {
		if (isOperator3(str[i])) {
			push3(str[i]);
    } 
		else {
			c[j++] = str[i];
			while ((top != -1) && (stack[top] == '#')) {
		        a = pop3();
		        c[j++] = pop3();
			}
		push3('#');
		}	
	}
	c[j] = '\0';

	i = 0;
	j = strlen(c) - 1;
	char d[20];

	while (c[i] != '\0') {
		d[j--] = c[i++];
	}
	printf("%s\n", d);
	printf("\n");
}

//POSTFIX TO INFIX CONVERSION
void push4(char ch) {
    stack[++top]=ch;
}

char pop4() {
    return stack[top--];
}

void convert(char exp[]) {
    int l, i, j = 0;
    char tmp[20];
    strrev(exp);
    l = strlen(exp);
    
    for(i = 0; i < 50; i++){
        stack[i]='\0';
    }
    
    printf("\nInfix conversion: ");
    for(i = 0; i < l; i++){
        if(exp[i] == '+' ||exp[i] == '-'|| exp[i] == '*' || exp[i] =='/')
            push4(exp[i]);
        else{
            tmp[j++] = exp[i];
            tmp[j++] = pop4();
        }
    }
    tmp[j] = exp[top--];
    strrev(tmp);
    puts(tmp);
}

int postfixtoinfix(void){
    char array[MAX_SIZE];

    printf("Enter postfix expression: ");
    gets(array);
    convert(array);
}

//PREFIX TO INFIX CONVERSION
int pushd(char *opnd) {
    strcpy(opnds[++topd],opnd);
}

char *popd() {
    return(opnds[topd--]);
}

int pushr(char opr) {
    oprs[++topr] = opr;
}

char popr() {
    return(oprs[topr--]);
}

int empty(int t) {
    if(t == 0) return(1);
    return(0);
}

int prefixtoinfix(void) {
    char prfx[50], ch, str5[50], opnd1[50], opnd2[50], opr[2];
    int i = 0, k = 0, opndcnt = 0;

    printf("Enter prefix expression: ");
    gets(prfx);
    while((ch = prfx[i++]) != '\0') {
        if(isalnum(ch)) {
            str5[0] = ch; str5[1] = '\0';
            pushd(str5); opndcnt++;
            if(opndcnt >= 2) {
                strcpy(opnd2, popd());
                strcpy(opnd1, popd());
                strcpy(str5,"");
                strcat(str5, opnd1);
                ch=popr();
                opr[0] = ch; opr[1] = '\0';
                strcat(str5, opr);
                strcat(str5, opnd2);
                strcat(str5, "");
                pushd(str5);
                opndcnt -= 1;
            }
        }
        else {
            pushr(ch);
            if(opndcnt == 1)opndcnt = 0; 
        }
    }
    
    if(!empty(topd)) {
        strcpy(opnd2, popd());
        strcpy(opnd1, popd());
        strcpy(str5, "");
        strcat(str5, opnd1);
        ch = popr();
        opr[0] = ch;
		opr[1] = '\0';
        strcat(str5, opr);
        strcat(str5, opnd2);
        strcat(str5, "");
        pushd(str5);
    }
    printf("\nInfix conversion: ");
    puts(opnds[topd]);
}

//PREFIX TO POSTFIX CONVERSION
int prefixtopostfix(void) {
    int i;
    char operand1[MAX_SIZE], operand2[MAX_SIZE];
    char symbol;
    char temp[2];
    char strin[MAX_SIZE];
    
    printf("Enter prefix expression: ");
    gets(prefix6);
        
	for(i = strlen(prefix6) - 1; i >= 0; i--) {
        symbol = prefix6[i];
        temp[0] = symbol;
        temp[1] = '\0';
                                
        if(!whitespace6(symbol)) {
            switch(symbol) {
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
	            strcpy(operand1, pop6());
	            strcpy(operand2, pop6());
	            strcpy(strin, operand1);
	            strcat(strin, operand2);
	            strcat(strin, temp);             
	            push6(strin);
            		break;
                default: 
                    push6(temp);
            }
        }
    }
    printf("\nPostfix conversion: ");
    puts(stack6[0]);
}

void push6(char *str6) {
    if(top > MAX_SIZE) {
        printf("\nStack overflow\n");
        exit(1);
    }
	else {
        top = top + 1;
        strcpy(stack6[top], str6); 
    }
}

char *pop6() {
    if(top == -1 ) {
        printf("\nStack underflow \n");
        exit(2);
    }
    else
        return (stack6[top--]);
}

int isempty6() {
    if(top == -1)
        return 1;
    else
    	return 0;
}

int whitespace6(char symbol) {
    if(symbol == BLANK || symbol == TAB || symbol == '\0')
        return 1;
    else
        return 0;
}

//STRINGS 
//TRAVERSAL
int traversal(void) {
	char str [MAX_SIZE];
	int i, l;
	
	printf("Enter a string: ");
	gets(str);
	
	l = strlen(str);
	
	printf("\nString after traversal: \n");
	for (i=0; i<l; i++) {
		printf("[%i]%c\n", i, str[i]);
	}   
}

//STRING DELETION
int deletion(void) {
	char array[MAX_SIZE];
	int n, pos, i;
	 
	puts("Enter string: ");
	gets(array);
	
	printf("Enter the position from where to delete: (Number: 0 to n)");
	scanf("%d", &pos);
	
	printf("Enter the number of characters to be deleted: ");
	scanf("%d", &n);
	
	deletionreference(array, n, pos);

}

void deletionreference(char *arr, int a, int b) {
	if ((a + b - 1) <= strlen(arr)) {
		strcpy(&arr[b - 1], &arr[a + b - 1]);
		printf("\nString after deletion: ");
		puts(arr);
		printf("\n");
	}
	else {
		printf("\nInvalid position or number of characters to delete! String deletion failed.\n");
	}
}

//STRING MERGING
int merging(void){
	char array1[MAX_SIZE], array2[MAX_SIZE];
	
	puts("Enter first string: ");
	gets(array1);
	
	puts("Enter second string: ");
	gets(array2);
	
	mergingreference(array1, array2);
	printf("\nString after merging: %s", array1);
	printf("\n");
}

void mergingreference(char array1[], char array2[]) {
	int i, j;
	i = strlen(array1);
	for (j = 0; array2[j] != '\0'; i++, j++) {
		array1[i] = array2[j];
	}
	array1[i] = '\0';
}

//STRING INSERTION
int insertion(void){
	char array1[MAX_SIZE], array2[MAX_SIZE], array3[MAX_SIZE];
	int pos, n, m, i = 0, j = 0;
 
	puts("Enter string:");
	gets(array1);
	
	puts("Enter string to insert:");
	gets(array2);
	
	printf("Enter the position from where to insert: (Number 0 to n)");
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

//STRING SORTING
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

//STRING SEARCHING
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

//FACTORIAL 
int factorial(void){
	int num, fact, f = 1, i;
	
	//accepts positive integer
	printf("Enter a positive integer: ");
	scanf("%d", &num);
	
	//will multiply each digit until 1 is the factorial
	for (i = 1; i <= num; i++){
		f = f * i;	
	}
	printf("\nThe Factorial of %d is %d.\n", num, f);
	
}

//FIBONACCI
int fibonacci(void){
	int num, i, fib, f0= 0, f1 = 1;
	
	printf("Enter the number of term: ");
	scanf("%d", &num);
	
	printf("\nThe Fibonacci Series of %d are: ", num);
	
	for(i = 0; i < num; i++){
		if(i <= 1)
			fib = i;
		else {
			fib = f0 + f1;
			f0 = f1;
			f1 = fib;
		}
		printf("%d ", fib);
	}
	printf("\n");
	
}

//QUADRATIC EQUATION
int quadratic(void){
	int a, b, c;
	float d, x1, x2;
	
	printf("Standard Form: ax^2 + bx + c\n");
	printf("Enter number for a = ");
	scanf("%d", &a);
	printf("Enter number for b = ");
	scanf("%d", &b);
	printf("Enter number for c = ");
	scanf("%d", &c);
  
	//discriminant formula
	d = (b * b) - (4 * (a * c));
	printf("\nThe discriminant is %.2f.\n", d);
	  
	if (d < 0){
		printf("Negative discriminant (d<0) - NO SOLUTION!\n");
	}
	else if (d == 0){
	    printf("Zero discriminant (d=0) - UNIQUE SOLUTION!\n");
	   	x1 = x2 = (-b + sqrt(0)) / (2 * a);
	   	printf("x = %.2f", x1);
	}
	else{
		//quadratic formula
		printf("Positive discriminant (d>0) - TWO SOLUTIONS!\n");
	    x1 = (-b + sqrt(d)) / (2 * a);
	    x2 = (-b - sqrt(d)) / (2 * a);
	    printf("x = %.2f , x = %.2f", x1, x2);
  	}  	
}

//GREATEST COMMON DIVISOR
int gcd(void){
	int num1, num2, r;
	
	//accepts positive integers
	printf("Enter two positive integers: ");
	scanf("%d %d", &num1, &num2);
	
	printf("\nThe GCD of %d and %d is ", num1, num2);
	
	while (num2 != 0){
		r = (num1 % num2);
		num1 = num2;
		num2 = r;
	}
	printf("%d.\n", num1);	
}

//QUEUES & DEQUEUE
//QUEUE
int linearqueue(void) {
	int ch;
    while (1) {
    	printf("\n     ==================================================================     \n\n");
    	printf("\t\t\t      LINEAR QUEUE\n\n");
        printf("\t\t\t[1]- Enqueue\n");
        printf("\t\t\t[2]- Dequeue\n");
        printf("\t\t\t[3]- Display Queue\n");
        printf("\t\t\t[4]- Back\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        fflush(stdin);
        system("cls");
        
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
            	qdqmenu();
        	default:
        		printf("\n\n");
            	printf("\t\t\t   -- Invalid choice! --\n\n");
        } 
    }
	
}

//ENQUEUE 
void enqueue() {
	printf("\n\n\t\t\t      ENQUEUE\n\n");
    int insert_item;
    if (Rear == QMAX_SIZE - 1)
       printf("Overflow! \n");
    else {
        if (Front == -1)
	        Front = 0;
	        printf("Enqueue element: ");
	        scanf("%d", &insert_item);
	        Rear = Rear + 1;
	        qarray[Rear] = insert_item;
    }
} 

//DEQUEUE 
void dequeue() {
	printf("\n\n\t\t\t      DEQUEUE\n\n");
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow! \n");
        return ;
    }
    else
    {
        printf("Dequeue element: %d\n", qarray[Front]);
        Front = Front + 1;
    }
} 
 
//DISPLAY QUEUE
void displayq() {
	printf("\n\n\t\t\t      DISPLAY QUEUE\n\n");
    int i;
    if (Front == - 1)
        printf("Empty Queue! \n");
    else {
        printf("Queue: ");
        for ( i = Front; i <= Rear; i++)
            printf("%d ", qarray[i]);
        printf("\n");
    }
} 

//CIRCULAR QUEUES
//CIRCULAR ENQUEUE
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

//CIRCULAR DEQUEUE
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

//DISPLAY CIRCULAR QUEUE
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

int circularqueue(void) {
	int ch, item;

	do {
		printf("\n     ==================================================================     \n\n");
	    printf("\t\t\t      CIRCULAR QUEUE\n\n");
		printf("\t\t\t[1]- Enqueue\n");
		printf("\t\t\t[2]- Dequeue\n");
		printf("\t\t\t[3]- Display Queue\n");
		printf("\t\t\t[4]- Back\n");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		fflush(stdin);
        system("cls");
	
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
				qdqmenu();
				break;
			default:
				printf("\n\n");
				printf("\t\t\t   -- Invalid choice! --\n\n");
		}
	} while(ch != 4);
}

//LINKED LIST
struct node {
    int info;
	struct node *next;
};

struct node * start = NULL;

int linkedlist(void){
    int ch;
    
    while(1){
    	printf("\n     ==================================================================     \n\n");
	    printf("\t\t\t      LINKED LIST\n\n");
        printf("\t\t\t[1]- Create list\n");
        printf("\t\t\t[2]- Display list\n");
        printf("\t\t\t[3]- Insert at the beginning\n");
        printf("\t\t\t[4]- Insert at the end\n");
        printf("\t\t\t[5]- Insert at specified position\n");
        printf("\t\t\t[6]- Delete from beginning\n");
        printf("\t\t\t[7]- Delete from the end\n");
        printf("\t\t\t[8]- Delete from specified position\n");
        printf("\t\t\t[9]- Back\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        fflush(stdin);
        system("cls");
        
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
            	linearmenu();
            	break;
            default:
                printf("\n\n");
				printf("\t\t\t   -- Invalid choice! --\n\n");
        }
    }
}

void createlist() {
	printf("\n\n\t\t\t      CREATE LIST\n\n");
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
	if(temp == NULL) {
        printf("\nOut of memory space! \n");
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
	printf("\n\n\t\t\t      DISPLAY LIST\n\n");
    struct node *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n");
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
	printf("\n\n\t\t\t      INSERT AT THE BEGINNING\n\n");
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("\nOut of memory space! \n");
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
	printf("\n\n\t\t\t      INSERT AT THE END\n\n");
    struct node *temp, *ptr;
    temp = (struct node *)malloc(sizeof(struct node));
        
	if(temp == NULL) {
        printf("\nOut of Memory Space! \n");
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
	printf("\n\n\t\t\t      INSERT AT SPECIFIED POSITION\n\n");
    struct node *ptr, *temp;
    int i, pos;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL) {
        printf("\nOut of memory space! \n");
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
            	printf("\nPosition not found! \n");
                return;
        	}
        }
    	temp -> next = ptr -> next;
        ptr -> next = temp;
    }
}

void deletebegin() {
	printf("\n\n\t\t\t      DELETE FROM BEGINNING\n\n");
    struct node *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n");
    }
    else {
        ptr = start;
    	start = start -> next ;
        printf("\nThe deleted element is: %d", ptr -> info);
        free(ptr);
    }
}

void deleteend() {
	printf("\n\n\t\t\t      DELETE FROM END\n\n");
	struct node *temp, *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n");
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
	printf("\n\n\t\t\t      DELETE FROM SPECIFIED POSTION\n\n");
    int i, pos;
    struct node *temp, *ptr;
    if(start == NULL) {
        printf("\nList is empty! \n");
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

//TREES
typedef struct nodes {
	int data;
	struct nodes *left;
	struct nodes *right;
} nodes;
	
 
nodes *create() {
	nodes *p;
	int x;
	
	printf("(-1 for no data): ");
	scanf("%d", &x);
	if (x == -1) {
		return NULL;
	}
	p = (nodes*)malloc(sizeof(nodes));
	p -> data = x;
	printf("Enter left child node of %d ", x);
	p -> left = create();
 
	printf("Enter right child node of %d ", x);
	p -> right = create();
	return p;
}

void preorder(nodes *t) {
	if (t != NULL) {
		printf("%d ",t->data);
		preorder(t->left);
		preorder(t->right);
	}
}

void postorder(nodes *t) {
	if (t != NULL) {
		postorder(t->left);
		postorder(t->right);
		printf("%d ", t->data);
	}
}

void inorder(nodes *t) {
	if (t != NULL) {
		inorder(t->left);
		printf("%d ",t->data);
		inorder(t->right);
	}
}

void levelGiven(nodes *t, int level){
	if(t == NULL){
		return;
	}else if(level == 0){
		printf("%d ", t->data);
	}else{
		levelGiven(t->left, level - 1);
		levelGiven(t->right, level - 1);
	}
}

int getHeight(nodes *t){
	int left_side;
	int right_side;
	
	if (t == NULL){
		return -1;
	} else {
		left_side = getHeight(t->left);
		right_side = getHeight(t->right);
	
	if (left_side > right_side) {
		return left_side + 1;
	} else
		return right_side + 1;
	}
}

void breadthFirst(nodes *t) {
	int level;
	int height = getHeight(t);
	
	for (level = 0; level <= height; level++){
		levelGiven(t, level);
	}
}

int treetraversal(void){
	printf("Enter root node ");
	 
	nodes *root;
	root = create();
	
	printf("\nPre-order tree traversal: ");
	preorder(root);
	
	printf("\nPost-order tree traversal: ");
	postorder(root);
	
	printf("\nInorder tree traversal: ");
	inorder(root);
	
	printf("\nBreadth-first tree traversal: ");
	breadthFirst(root);
	
	printf("\n");
}
