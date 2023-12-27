#include<stdio.h>

void main(){
    printf("enter a number");
    int num;
    int pos = 31;
    scanf("%d",&num);
L1:
    if(pos>=0)
{    printf("%d",num>>pos&1);
    pos--;
    goto L1;
}
    printf("\n");
     for(int i=31;i>=0;i--){
       printf("%d",num>>i&1);

    }

}