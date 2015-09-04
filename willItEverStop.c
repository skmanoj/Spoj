#include<stdio.h>
int main()
{  
  long long int x;
  scanf("%lld",&x);
  if(x>1)
  {
    if(!(x & (x-1)))
      printf("TAK");
    else
      printf("NIE");  
  }
  else
    printf("TAK");
  return 0;
}
