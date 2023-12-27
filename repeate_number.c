#include<stdio.h>
#include <stdbool.h>
void main(){
    int a[10];
 int t;
 printf("enter  elements");
 int size = sizeof(a)/sizeof(a[0]);
 for(int i=0;i<size;i++) {
    scanf("%d",&a[i]);
 }

 printf("\n");
int i,j,k ;
bool flag;
for(i = 0;i<size;i++){
    int c=0;
    for(j=i-1,flag=0;j>=0;j++){
        if(a[i]==a[j]){
            flag =1;
            break;
        }

    }
    for(k =i+1;k<size;k++){
    if(a[i]==a[k]){
        c++;
    }
    }
    printf("%d is repeated %d times\n",a[i],c);
   
}
 
}