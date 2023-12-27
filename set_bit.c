#include<stdio.h>

void main(){
    int num,pos;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter a bit position for set");
    scanf("%d",&pos);

    num= num|1<<pos;
    if(num>>pos&1){
        printf("done");
        printf("%d\n",num);

    }
    else{
        printf("not set");
        printf("%d\n",num);

    }
    for(int i=31;i>=0;i--){
        printf("%d",num>>i&1);

    }
}

//for set num|pos<<1;
// for clear num & ~(1<<pos)
//togle bit  num ^1<<pos