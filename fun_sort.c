#include<stdio.h>
void a_sort(int *p,int l){
    int t;
    for(int j=0;j<l;j++){
        for(int i=0;i<l-i;i++){
            if(p[i]>p[i+1]){
                t=p[i];
                p[i]=p[i+1];
                p[i+1]=t;
            }
        }
    }
}
void main(){
    int a[5] = {50,30,10,20,40};

    int len = sizeof(a)/sizeof(a[0]);
    a_sort(a,len);
    for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
}