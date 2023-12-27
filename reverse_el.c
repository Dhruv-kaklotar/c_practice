#include<stdio.h>
void main(){
 int a[10];
 int t;
 printf("enter  elements");
 int size = sizeof(a)/sizeof(a[0]);
 for(int i=0;i<size;i++) {
    scanf("%d",&a[i]);
 }
  for(int i=0;i<size;i++) {
    printf("%d ",a[i]);
 }
 printf("\n");
 int i,j;
 for(i=0,j=size-1;i<j;i++,j--){
    t=a[i];
    a[i] = a[j];
    a[j]=t;
 }

 for(int i=0;i<size;i++) {
    printf("%d ",a[i]);
 }
//  for(i=0,j=(size/2);i<size/2;i++,j++)
//  {
//      t=a[i];
//     a[i] = a[j];
//     a[j]=t;
//  }
// printf("\n");
//  for(int i=0;i<size;i++) {
//     printf("a[%d] = %d ",i,a[i]);
//  }
 for(i=0,j=1;j<size;i+=2,j+=2){
    t=a[i];
    a[i] = a[j];
    a[j]=t;
 }

printf("\n");
 for(int i=0;i<size;i++) {
    printf("%d ",a[i]);
 }
}