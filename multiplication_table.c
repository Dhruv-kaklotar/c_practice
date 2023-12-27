#include<stdio.h>

void main(){
    int n = 1;
    int num =5;
    L1:
        if(n<11){
            
        
        printf("%d * %d = %d\n",num,n,num*n);
        n++;
        goto L1;
        }
    
}