#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_SIZE 100

void postfixtoprefix();

char str[MAX_SIZE], stack[MAX_SIZE];
int top = -1;

int main() {
	postfixtoprefix();

  return 0;
}

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
	

