#include<stdio.h>
void main(){
 char s[10],ch;
 int l;
 printf("enter a string\n");
 scanf("%s",s);
 for(l=0;s[l];l++);

 for(int i=0,j=l-1;i<j;i++,j--){
    ch=s[i];
    s[i]=s[j];
    s[j]=ch;
 }

 printf("%s",s);
}
