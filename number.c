// #include<stdio.h>
// // not working
// void main(){
    // int a[] ={111,2,35,4,5};
    // int d;
    // int w;
    // for(int i= 0;i>5;i++){
    //     int b=0;
    //     d = a[i];
    //     w =d;
    //     printf("%d \n",w);
    //     int c = a[i+1];
    //     // while(c>0){
    //     //     c/10;
    //     //     b++;
    //     // }
    //     // printf("%d\n",b);
    //     // for(int j=0;j>b;b++
    //         w=w*10;
    //         // printf("\n%d",d);
    //     // }//

    // }
    // printf("%d",w);

// int a=5,b=10;

// a=a^b^(b=a);

// printf("%d  %d",a,b);
// char ch='a';
// int i=0;
// // while(100 - i++){
// printf("%ld ",sizeof(ch++));

// // }

// int q=10;
// int *p=100;
// printf("%lu",p);


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
for(int i=a;i<=b;i++){
    if(i<=9){
        if(i==1) printf("one\n");
        else if(i==2) printf("two\n");
        else if(i==3) printf("three\n");
        else if(i==4) printf("four\n");
        else if(i==5) printf("five\n");
        else if(i==6) printf("six\n");
        else if(i==7) printf("seven\n");
        else if(i==8) printf("eight\n");
        else if(i==9) printf("nine\n");
    }
        else {
        if(i%2)
        printf("odd\n");
        else {
        printf("even\n");
         }
       } 
       
    
     

    }  
    


    return 0;

}


// }