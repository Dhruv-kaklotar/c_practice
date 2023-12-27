#include<stdio.h>
void main(){
    int a[10];
    printf("enter elements");
    int size = sizeof(a)/sizeof(a[0]);
    int i,j;
   
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
     printf("befor sort\n");
     for(int i=0;i<size;i++) {
    printf("%d ",a[i]);
 }
 //bubble sort

    // for(int i=0;i<4;i++){
    //     int t;
    //     for(j=0;j<size-1-i;j++){
    //         if(a[j]>a[j+1]){
    //            t= a[j];
    //            a[j]=a[j+1];
    //            a[j+1]=t;
    //         }
    //     }
    
    // }

    //selection sorting method

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            int t=0;
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
        }
    }
    printf("\n after sort\n");
     for(int i=0;i<size;i++) {
    printf("%d ",a[i]);
 }
}