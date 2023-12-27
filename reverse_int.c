#include<stdio.h>

void main(){
    int a;
    printf("enter a number for reverse");
    scanf("%d",&a);

    int k =0;
    while(a>0){
    k =(k*10)+ (a%10);
    a = a/10;
    }
    printf("\n %d",k);
}