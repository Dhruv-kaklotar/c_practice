#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,sum=0;
    int **p;
    scanf("%d",&n);
    p=malloc(sizeof(int *) * n);
    for(i=0;i<n;i++)
    p[i]= malloc(sizeof(int));
    
    for(i=0;i<n;i++)
    {
        scanf("%d",p[i]);
        sum=sum + *p[i];
    }
    printf("\n%d\n",sum);
}