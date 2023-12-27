#include<stdio.h>
void main(){
    char s[10],ch;
    printf("enter a string\n");
    scanf("%s",s);
    printf("which char want to delete?\n");
    scanf(" %c",&ch);
    int i;
    for(i=0;s[i];i++){
        if(s[i]==ch){
            for(int j=i;s[j];j++){
               s[j]=s[j+1];
            }
        }
    }
    printf("s = %s",s);
}