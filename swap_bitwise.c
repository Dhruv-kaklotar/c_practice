#include<stdio.h>
void main(){
     printf("enter a value of k\n");
    int k;
    scanf("%d",&k);
     printf("enter a value of d\n");
    int d;
    scanf("%d",&d);

    k=k^d;
    d=k^d;
    k=k^d;
    printf("k = %d  d= %d",k,d);
}