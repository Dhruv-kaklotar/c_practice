#include <stdio.h>
int fact(int);
void prnt_bin(int);
void strp(const char *);
void main()

{
    // Perfect Number
    //  int a;
    //  printf("enter a number");
    // scanf("%d",&a);
    // int k=0;
    // for(int i=1;i<a;i++){
    //     if((a%i)==0){
    //         k=k+i;;
    //         a=a/i;
    //     }
    // }
    // if(k==a){
    //     printf("perfect number");
    // }
    // else printf("not perfect number");

    // fibonacii between 0 to 31
    //  int a=0,b=1,c=0;
    //  printf("%d %d ",a,b);
    //  while((a+b)<31){
    //      c = a+b;
    //      a=b;
    //      b=c;
    //      printf("%d ",c);
    //  }

    // print palidrom between 51 to 151
    //  int a,n,b;

    // for(a=51;a<=151;a++){
    //  n = a;
    //  b=0;
    // while(n){

    //     b=(b*10)+(n%10);
    //     n=n/10;
    // }
    // if(b==a){
    //     printf("%d ",a);
    // }
    // }

    // strong number
    // int a,b,d,c=0;
    // int n=145,k;
    // for(int j=1;j<=251;j++){
    // k =j;
    // c=0;
    // while(k){
    //     d=1;
    //     a=k%10;
    //     for(int i=1;i<=a;i++){
    //         d=d*i;
    //     }
    //     c=c+d;
    //     k=k/10;
    // }
    // // printf("%d ",c);

    // if(c==j) printf("%d ",c);
    // }

    // prime number between 51 to 11
    //  int a;
    //  for(int k=51;k>0;k--){
    //      a=1;
    //  for(int i=2;i<k;i++){
    //      if((k%i)==0){
    //          a=0;
    //          break;
    //      }
    //  }
    //  if(a){
    //      printf("%d ",k);
    //  }
    //  }

    // factorial between 2 to 11
    // int a;
    // for (int j = 2; j <= 11; j++)
    // {
    //     a = 1;
    //     for (int i = 1; i <= j; i++)
    //     {
    //         a = a * i;
    //     }
    //     printf("%d ", a);
    // }

//    for(int i=1;i<=501;i++){
//     int b=i,c=0,a;
//     while(b){
//         a=b%10;
//         c=c+(a*a*a);
//         b=b/10;
//     }
//     if(i==c) printf("%d ",i);
// }

//factorial using recursion
// int a;
// printf("enter a number\n");
// scanf("%d",&a);
// int k ;
// k=fact(a);

// printf("%d\n",k);

// prnt_bin(a);

char s[10];
printf("enter a string ");
scanf("%s",s);
int k;
strp(s);


// int num,i=0;
// num =-++i+ ++-i;
// printf("%d",num);


}
void strp(const char *a){
    
    if(*a){
        printf("%c ",*a);
        strp(a+1);
    }
        

}
int fact(int n){
    if(n==0 ||n==1){
        return 1;
    }
    return n*fact(n-1);
}

void prnt_bin(int n){
    static int pos=31;
    if(pos>=0){
        printf("%d",(n>>pos&1));
        pos--;
        prnt_bin(n);
    }
    else pos=31;
}
