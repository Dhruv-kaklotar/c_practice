#include<stdio.h>
void main(){
    char s[10],a[10];
    printf("enter first string\n");
    scanf("%s",s);
    printf("enter second string\n");
    scanf("%s",a);
    int i;
    for(i=0;s[i];i++){
        if(s[i]!=a[i]){
            break;
        }
    }
    if(s[i]==a[i]){
        printf("equal");
    }
    else printf("not equal");
}