#include<stdio.h>
void main(){
 printf("enter a number\n");
 int a;
 scanf("%d",&a);
// //set 3rd and 2nd bit;
//  a=a|1<<3;
//  a=a|1<<2;

//set 0th and 5th bit
// a=a|1<<0;
// a|=1<<5;

//clear 3rd and 2nd bit
// a&=~(1<<3);
// a&=~(1<<2);

//toggle 1st and 4th bit
// a^=1<<1;
// a^=1<<4;

//delete 0th bit
// a=a>>3;

//delete 5th bit
 int c=a;
a=a>>6;
a=a<<6;
c=c<<26;
c=c>>26;
a=a|c;
 printf("%d",a);   
}