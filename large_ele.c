#include<stdio.h>
void main(){
    int a[10];
    printf("enter elements");
    int size = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++){
        int c=0;
        int flag=0;
        for(int j=0;j<size;j++){
            if(a[i]<a[j]){
                flag=1;
                break;
            }

        }
        if(flag==0){
            printf("bigest number is %d",a[i]);
        }

    }

    //small method
    int d=0;
    int s=a[0];

    for(i=0;i<size;i++){
        if(a[i]>d){
            d=a[i];
        }
        if(a[i]<s){
            s=a[i];

        }

    }
    printf("\n largest element is %d and smallest element is %d",d,s);
    int sl=0,l=0;
if(a[0]>a[1]){
    l=a[0];
    sl =a[1];
}
else
{
    l=a[1];
    sl=a[0];
}

     for(i=2;i<size;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];
        }
        else if(a[i]>sl){
            sl=a[i];

        }

    }
    printf("\n largest element is %d and smallest element is %d",l,sl);
}