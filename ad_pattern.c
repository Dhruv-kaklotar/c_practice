#include<stdio.h>
void main(){
 for(int i=1;i<=5;i++){
    for(int j=1;j<i*2;j+=2){
        printf("%d ",j);
    }
    printf("\n");
 }
printf("\n");

 for(int i=6;i>0;i--){
    for(int j=1;j<i*2;j+=2){
        if(i%2==0) printf("* ");
        else printf("%d ",j);
    }
    printf("\n");
 }
 printf("\n");

  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(j==6-i) printf("* ");
        else printf("%d ",j);
    }
    printf("\n");
 }
printf("\n");

for(int i=1;i<=5;i++){
    for(int j=2;j<=i*2;j+=2){
        printf("%d ",j);
    }
    printf("\n");
 }
printf("\n");

for(int i=5;i>0;i--){
    for(int j=1;j<=i;j++){
        if(j%2==0) printf("* ");
        else printf("%c ",'A'+j-1);
    }
    printf("\n");
 }
 printf("\n");

for(int i=6;i>0;i--){
    for(int j=1;j<=i;j++){
         printf("%d ",j);
    }
    printf("\n");
 }
 printf("\n");

int i,j;
  for (i = 1; i <= 5; i++) {
        for (j = 1; j < i; j++) {
            printf("  ");
        }

        for (j = i; j <= 5; j++) {
            if (j < 5) {
                printf("%d ", 2 * j - 1);
            } else {
                printf("%d", 2 * j - 1);
            }
        }
        printf("\n");
  }
 
  printf("\n");

  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        if(j%2==0) printf("* ");
        else printf("%c ",'A'+j-1);
    }
    printf("\n");
 }
 printf("\n");

 for(int i=5;i>0;i--){
    for(int j=1;j<=i;j++){
        if(j%2==0) printf("* ");
        else printf("%c ",'A'+j-1);
    }
    printf("\n");
 }
 printf("\n");

 for(i=5;i>0;i--){
    int k=0;
    int a=1;
    for(j=1;j<=i;j++){
        if(j%2!=0){
        printf("%c ",'A'+k);
        k++;
        }
        else{
            
            printf("%d ",a);
            a++;
        }

    }
    printf("\n");
    
    
    
 }

     printf("\n");

for(i=1;i<=5;i++){
    for(j=5;j>=6-i;j--){
        if(i%2==0) printf("* ");
        else  printf("%d ",j);
    }
    printf("\n");
}

printf("\n");

for(i=1;i<=5;i++){
    for(int k=1;k<=5-i;k++){
        printf("  ");
    }
    for(j=5;j>6-i;j--){
        printf("%c ",'A'+(5-j));
    }
    printf("\n");
}
}