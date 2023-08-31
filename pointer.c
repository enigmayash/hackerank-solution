#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update( int *a, int *b) {
    int temp=(*a+(*b));
    int c=*a-(*b);
    *b=abs(c); 
    *a=temp;
}

int main() {
   int a, b;
   int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update( pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
