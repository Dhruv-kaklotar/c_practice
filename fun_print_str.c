#include<stdio.h>
void str_print(char *);
void main(){
    char s[10];
    printf("enter a string\n");
    scanf("%s",s);

    str_print(s);


}
void str_print(const char *p){
    while(*p){
        printf("%c ",*p++);
    }
}