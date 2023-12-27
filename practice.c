#include<stdio.h>
void main(){
    char s[10],ch;
    int l;
    printf("enter a string\n");

    // scanf("%[^\n]",s);
    scanf("%s",s);
    // int i;
    // char d[10];
    // for(i=0;s[i];i++){
    //     d[i]=s[i];
    // }
    // d[i]='\0';
    // printf("s = %s  d=%s\n",s,d);
    //print using characters;
    // for(int i=0;s[i];i++){
    // printf("%c",s[i]);
    // }
    for(l=0;s[l];l++);

    for(int i=0,j=l-1;i<j;i++,j--){
        ch = s[i];
        s[i]=s[j];
        s[j]=ch;
    }

    printf("%s",s);

}