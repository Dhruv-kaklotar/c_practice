#include <stdio.h>
void main()
{
    int a[5];
    int t;
    printf("enter  elements");
    int size = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    int i,j,n=0;
    for( i=0;i<size;i++){
        for(j=2;j<a[i];j++){
            if(a[i]%j==0){
                break;
            }
        
        }
        if (a[i]==j) n++;

    }
    printf("%d",n);
}