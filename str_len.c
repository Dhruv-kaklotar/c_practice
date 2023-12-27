#include<stdio.h>
int str_len(char *);
void main(){
    char s[10];
    printf("enter a string\n");
    scanf("%s",s);

    int len = str_len(s);
    printf("str len is %d",len);
}
int str_len(char *p){
    int c =0;
    while(*p){
        c++;
        *p++;
    }
    return c;
}