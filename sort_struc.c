#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
	float b[n];
    int p1,p2,area1,area2;
	int i,j;
    struct triangle temp; 
    for (i=0;i<n; i++) {    
        p1=(tr[i].a+tr[i].b+tr[i].c)/2;
        area1=sqrt(p1*(p1-tr[i].a)*(p1-tr[i].b)*(p1-tr[i].c));
		printf("area =%d ]\n",area1);
    for(j=i+1;j<n;j++){
        p2=(tr[j].a+tr[j].b+tr[j].c)/2;
        area2=sqrt(p2*(p2-tr[j].a)*(p2-tr[j].b)*(p2-tr[j].c));
        if(area1>area2){
        temp=tr[i];
        tr[i]=tr[j];
        tr[j]=temp;
        } 
    }
    }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}	