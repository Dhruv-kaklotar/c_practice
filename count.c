#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,count;
    char s[1000];
    scanf("%s",s);

char ch;    
    for(i=0;i<10;i++)
    {
        for(j=0,count=0;j<strlen(s);j++)
        {
        if(48+i==s[j])
            count++;
    }
        printf("%d ",count);
    }
    

    return 0;
}
