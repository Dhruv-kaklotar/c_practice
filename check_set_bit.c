#include<stdio.h>

void main(){
     int num;
    scanf("%d",&num);
    int a= 0;
    for(int i=0;i<=31;i++){
        if(num>>i&1){
            a++;
        }
    }
    printf("%d bits are set in %d",a,num);
}