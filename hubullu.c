#include<stdio.h>
int main()
{
  int t,s,p;
  scanf("%d",&t);
  while(t>0)
  {
    scanf("%d %d",&p,&s);
    puts(1-s ? "Airborne wins." : "Pagfloyd wins.");
    t--;
  }
  return 0;
}
