#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
     for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
printf("\n");
   for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int a=1;a<i;a++){
            printf("*");
        }
        printf("\n");
    }
     for(int i=5;i>=1;i--){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for(int a=1;a<i;a++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
        for(int i=5;i>0;i--){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
     for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
        printf("\n");

for(int i=1;i<=5;i++)
{
    for(int k=0;k<=5-i;k++){
        printf(" ");
    }
    for(int j=1;j<i*2;j++){
        if(j%2==0){
            printf("*");
        }
        else{
            printf("%d",i);
        }

    }
    
    printf("\n");
}
    printf("\n");
for(int i=1;i<=5;i++){
    int q=1;
    for(int j=1;j<=i;j++){
        if(i%2==0){
            printf("%d ",j*2);
        }
        else{
            
            printf("%d ",q);
            q+=2;
                    }
    }
    printf("\n");
}
int a=10;b=20;c=30;

(a<b)
}