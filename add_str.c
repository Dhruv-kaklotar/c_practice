#include<stdio.h>
void main(){
    char s[10],a[10];
 int l,m;
 printf("enter a first string\n");
 scanf("%s",s);
 printf("enter a second string\n");
 scanf("%s",a);
int s_size = sizeof(s);

 for(l=0;s[l];l++);
int k=s_size-l-1;

for(m=0;a[m];m++);

if(k-m>=0){
int i;
  for(i=0;i<m;i++){
    s[l+i]=a[i];
  }
    s[l+i]='\0';
    printf("%s",s);
}
else printf("it make size biger than declair");
}