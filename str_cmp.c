#include<stdio.h>
int str_cmp(const char *,const char *);
void main(){
 char s[10],a[10];
 printf("enter first string\n");
 scanf("%s",s);
 printf("enter second string\n");
 scanf("%s",a);
int b = str_cmp(s,a);
printf("%d \n",b);
}
int str_cmp(const char *p,const char *q){
    int i;
    for(i =0;p[i];i++){

        if(p[i]!=q[i]){
            break;
        }
    }
    if(p[i]==q[i]){
        return 0;
    }
    else if(p[i]>q[i]) return 1;
    else return -1;
}