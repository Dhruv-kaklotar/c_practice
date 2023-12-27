#include<stdio.h>
void main(){
    printf("enter a number to check it is odd or even\n");
    int k;
    scanf("%d",&k);

    if(k>>0&1){
        printf("it is odd number");

    }
    else{
        printf("it is even number");
    }
//easy and short trick
    if(k&1){
        printf("\nodd");

    }
    else printf("\neven");
    
}