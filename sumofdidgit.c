#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,r=0;
    scanf("%d", &n);
    while(n>0){
         r=r+(n%10);
         n=n/10;
    }
    printf("%d",r);
    return 0;
}
