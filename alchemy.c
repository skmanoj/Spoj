#include<stdio.h>
int main()
{ 
  int x=1000,y=37;
  long long int a,b;
//  printf("%d",(float)4/10==(float)40/100);
  while(1)
  {
    scanf("%lld %lld",&a,&b);
    if(a==-1 && b==-1)
      break;
    if((float)a/x==(float)b/y)
      printf("\nY");
    else
      printf("\nN");    
  }
  return 0;
}
