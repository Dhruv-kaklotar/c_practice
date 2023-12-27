#include<stdio.h>
void main(){
 int i,j,n,k;
scanf("%d",&n);

 for(i=0;i<n;i++){
    for(j=0;j<=i;j++){
        printf("%d ",n-j);
    }
    for(k=1;k<(2*n)-(i*2)-1;k++)
    printf("%d ",n-i);

    for(j=n-i+1;j<=n;j++)
    printf("%d ",j);
printf("\n");
 }   

  for(i=n-2;i>=0;i--){
    for(j=0;j<=i;j++){
        printf("%d ",n-j);
    }
    for(k=1;k<(2*n)-(i*2)-1;k++)
    printf("%d ",n-i);

    for(j=n-i+1;j<=n;j++)
    printf("%d ",j);
printf("\n");
 }
}