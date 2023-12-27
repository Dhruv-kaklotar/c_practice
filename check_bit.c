#include<stdio.h>
void main(){
 printf("enter a number");
 int num,pos;
 scanf("%d",&num);
 printf("enter a position of bit");
 scanf("%d",&pos);
 if(num>>pos&1){
    printf("it is set bit");
 }
else{
    printf("it is clear bit");

 }
}