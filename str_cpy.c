#include<stdio.h>
int str_len(char *);
void str_cpy(const char *, char *);
void main(){
    char s[10],a[10];
    printf("enter a string\n");
    scanf("%s",s);

    int len = str_len(s);
    str_cpy(s,a);
    printf("a[] =  %s",a);
}
int str_len(char *p){
    int c =0;
    while(*p){
        c++;
        *p++;
    }
    return c;
}
void str_cpy(const char *p, char *a){
   while(*p){
    *a=*p;
    a++;
    p++;
   }
   *a='\0';


}