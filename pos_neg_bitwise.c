#include<stdio.h>
void main(){
    printf("enter a number");
    int num;
    scanf("%d",&num);
    if(num>>31&1){
        printf("negative");
        }
    else printf("positive");
}