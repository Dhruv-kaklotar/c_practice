#include<stdio.h>
void binary(int);
void main(){
    printf("enter a number\n");
    int num;
    scanf("%d",&num);
    binary(num);

}

void binary(int n){
    for(int i=31;i>=0;i--){
        printf("%d",n>>i&1);
    }
}