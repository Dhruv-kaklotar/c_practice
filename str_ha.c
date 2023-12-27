#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char st[1000];
    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", st);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int size =strlen(st);
    printf("size =%d\n",size);
    // printf("%s\n",st);
    for(i=0;i<strlen(st);i++){

        if(st[i] == ' ' || st[i]=='\0')
        printf("\n");
        else
        printf("%c",st[i]);

        
    }
    return 0;
}
