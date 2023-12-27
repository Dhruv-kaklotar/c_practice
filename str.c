#include<stdio.h>
char * str_adr(char *,char);
void str_cpy(const char *,char *);

void main(){
 printf("enter a string\n");
 char s[10],ch,s1[10];
 scanf("%s",s);
 printf("enter a char");
 scanf(" %c",&ch);
 char *p;



 while(p = str_adr(s,ch)){
  str_cpy(p+1,p);
    
 }

  printf("%s\n",s);

//  if(p==0){
//     printf("char is not present");
//  }
//  else{
//     printf("address = %p",p);
//  }
}

char * str_adr(char *a,char c){
    while(*a){
        if(*a==c) return a;
        a++;
    }
    return 0;
}

void str_cpy(const char *a,char *b){
    while(*a){
        *b=*a;
        a++;
        b++;
    }
    *b='\0';

}