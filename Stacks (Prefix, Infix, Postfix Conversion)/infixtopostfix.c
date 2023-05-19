#include<stdio.h>
#include<ctype.h>
#define MAX_SIZE 100

int infixtopostfix(void);

char stack[MAX_SIZE];
int top = -1;

int main() {
	infixtopostfix();
	
	return 0;
}

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