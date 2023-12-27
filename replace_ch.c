#include<stdio.h>
void main(){
    char s[10],a,b;
    printf("enter a string\n");
    scanf("%s",s);
    printf("which charcter you want to change from string\n");
    scanf(" %c",&a);
    printf("Enter the character you want to replace in the string\n");
        scanf(" %c",&b);

    int i;
    for(i=0;s[i];i++){
        if(s[i]==a){
            s[i]=b;
        }
    }
    printf("string = %s",s);
}