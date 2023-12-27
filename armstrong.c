#include<stdio.h>

int main(){
    int d;
    printf("enter a  number for check armstrong number or not\n");
    scanf("%d",&d);
    int a,c=0,m,j;
    int k =0,b,i;
    for(a=d;a;a=a/10)  //find number of digit.
        c++;


        for(a=d;a;a=a/10){
        b= a%10;
        for(j=0,m=1;j<c;j++)
            m=m*b;
    k =k+m;
   
    }
  if (d==k){
        printf("\narmstrong number");
    }
    else{
        printf("\ngiven nuber is not armstrong number");
    }

    return 0;
}