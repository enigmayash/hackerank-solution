#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int i,j,a=0,b=0,c=0,and=0,or=0,xor=0;
    
    
    
   
  for(i=1;i<n;i++)
  {
    
          for(j=i+1;j<=n;j++)
          {
               a=(i&j);
               c=i^j;
               b=i|j;
             if(a>and && a<k){
                 and=a;
             }
             
             if(b>or && b<k){
                 or=b;
             }
            
             if(c>xor && c<k){
                 xor=c;
             }
                 
             
             }
          
       
  }
    
             
             
           
            
            
        
printf("%d\n",and);
  printf("%d\n",or);
  printf("%d\n",xor);
    }
  
 
  


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
