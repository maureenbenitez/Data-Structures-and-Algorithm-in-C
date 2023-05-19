#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define BLANK ' '
#define TAB '\t'
#define  MAX_SIZE 100

int prefixtopostfix(void);

char *pop6();
char prefix6[MAX_SIZE];
char stack6[MAX_SIZE][MAX_SIZE];
void push6(char *str6);
int isempty6();
int whitespace6(char symbol);
int top = -1;

int main() {
    prefixtopostfix();
        
	return 0;
}

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