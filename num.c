#include<stdio.h>
void main(){
    int num;
    printf("enter a number");
    scanf(" %d",num);
    // if(num>>31&1){
    //     printf("negative number");
    // }
    // else
    // {
    //     printf("positive number");
    // }/
    printf("%d",num>>2&1);
}