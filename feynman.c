#include<stdio.h>
int main()
{
  int n;
  long int val;
  while(1)
  {
    val=0;
    scanf("%d",&n);
    if(n==0)
      break;
    val=(n * (n+1) * ((2*n)+1))/6;
    printf("\n%ld",val);  
  }
  return 0;
}
