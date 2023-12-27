#include<stdio.h>
void rev_por(char *,char *);
void main(){
    
char s[10];
    printf("enter a string\n");
    scanf("%s",s);
    rev_por(s+2,s+6);
    printf("s = %s\n",s);
}

void rev_por(char *a,char *b){
    char ch;
    while(a<b){
        ch =*a;
        *a=*b;
        *b=ch;
        a++;
        b--;
    }
}