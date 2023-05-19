#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 100

int postfixtoinfix(void);

char stack[MAX_SIZE];
int top = -1;

int main() {
	postfixtoinfix();
	
	return 0;
}

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
