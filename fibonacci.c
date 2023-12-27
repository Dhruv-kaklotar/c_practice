#include<stdio.h>

int fib(n){
     static int a =0,b= 1;
     int ans;
    if(n>0){
        ans = a+b;
        a=b;
        b=ans;
        printf(" %d",ans);
        return (fib(n-1));
    }
}
void main(){
    int a =0,b= 1;
    int n= 8;
    int ans;
    // printf("in main function");
    // printf("%d %d", a,b);
    // for(int i =2;i<n;i++){
    //     ans = a+b;
    //     printf(" %d",ans); 
    //     a=b;
    //     b=ans;

    // }
    printf("from fib function\n");
    printf("%d %d",a,b);
    fib(n-2);
}