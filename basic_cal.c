#include<stdio.h>
void main(){
        int a,b;
        char ch;
        printf("enter first number");
        scanf("%d",&a);
        printf("enter second number");
        scanf("%d",&b);
        printf("which operation you want +,-,*,// ");
        scanf(" %c",&ch);
        switch(ch){
                case '+':printf("%d",a+b);
                         break;
                case '-':printf("%d",a-b);
                         break;
                case '*':printf("%d",a*b);
                         break;
                case '/':printf("%d",a/b);
                         break;
                default: printf("you have enter wrong input");
                break;        }
}