#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#define MAX_SIZE 100

int prefixtoinfix(void);

char opnds[MAX_SIZE][MAX_SIZE], oprs[MAX_SIZE];
int  topr = -1, topd = -1;

int main() {
	prefixtoinfix();
	
	return 0;
}

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