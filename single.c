#include<stdio.h>
void main(){
 int i,a,n;
 printf("enter a number\n");
 scanf("%d",&n);
L1:
 for(i=n,a=1;i;i=i/10)
 {
    a=a*(i%10);
 }
  printf("%d ",a);
 if(a/10==0)
 {
    printf("\n%d\n",a);
//   break;/
 }
 else
 {
   n=a;
   goto L1;
 }
}
