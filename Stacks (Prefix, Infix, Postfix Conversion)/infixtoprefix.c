#include<stdio.h>
#include<string.h> 
#include<limits.h>
#include<stdlib.h>
#define MAX_SIZE 100

int infixtoprefix(void);

char stack[MAX_SIZE];
int top = -1;

int main() {
	infixtoprefix();
	
	return 0;
}

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
