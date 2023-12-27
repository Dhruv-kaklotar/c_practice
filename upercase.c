#include<stdio.h>
void main(){
 char s[10];
 int l;
 printf("enter a string\n");
 scanf("%s",s);
 for(l=0;s[l];l++);
 for(int i=0;i<l;i++){
    if(s[i]>='a'&&s[i]<'z'){
        s[i]=s[i]-32;
    }
 }
 printf("s= %s",s);

}