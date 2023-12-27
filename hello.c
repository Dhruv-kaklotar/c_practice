#include <stdio.h>

int main()
{
 int n =5;
 for(int i=1;i<n+1;i++){
    for(int k=n-i;k>0;k--){
        printf(" ");
    }
    for (int j=1; j<=i;j++){
        printf("*");
    }
    for (int j=1; j<=i-1;j++){
        printf("*");
    }
    printf("\n");

 }
 for(int i=n-1;i>0;i--){
    for(int k=n-i;k>0;k--){
        printf(" ");
    }
    for (int j=1; j<=i;j++){
        printf("*");  
     }
    for (int j=1; j<=i-1;j++){
        printf("*");
    }
    printf("\n");

 }
 
 int a = 2;
 int b = 3;
 a= a+b;
 b = a-b;
 a = a-b;
 printf("value of a is %d and value of b is %d",a,b);
    return 0;
}