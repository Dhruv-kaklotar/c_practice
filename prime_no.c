#include<stdio.h>
#include <stdbool.h>
void main(){
    int n ;
    int c;
    bool a=1;
    printf("enter a number");
    scanf("%d",&n);
    for(int i = 2;i<n;i++){
        c= n%i;
        if(c==0){
            a = 0;
            break;
        }
           }
    if(a){
        printf("it's prime number");
    }
    else{
        printf("not a prime number");
    }
    
}