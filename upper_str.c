#include<stdio.h>
void upper(char *);
void main(){
    char s[10];
    printf("enter a string \n");
    scanf("%s",s);

    upper(s);
    printf("%s",s);
}
void upper(char *p){
    for(int i=0;p[i];i++){
        if(p[i]>='a'&&p[i]<='z'){
            p[i]=p[i]-32;
        }
    }
}