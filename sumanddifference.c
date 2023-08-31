#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b,res1, res2;
float c,d,res3, res4;

scanf("%d%d",&a,&b);

scanf("%f%f",&c,&d);
res1=a+b;
res2=a-b;
res3=c+d;
res4=c-d;
printf("%d %d\n",res1,res2);
printf("%0.1f %0.1f\n",res3,res4);

	
    
    return 0;
}
