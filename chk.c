#include<stdio.h>
#include<math.h>
int main()
{
  int t;
  long double s,val,ans,a,b,c;
  scanf("%d",&t);
  while(t>0)
  {
    scanf("%Lf %Lf %Lf",&a,&b,&c);
    s=(a+b+c)/2;
    val=3*(sqrt(s*(s-a)*(s-b)*(s-c)));
    ans=((sqrt(3)/4)*((a*a)+(b*b)+(c*c)))+val;
    ans/=2;
    printf("%.2Lf",ans);
    t--;
  }
  return 0;
}
