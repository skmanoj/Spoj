#include<stdio.h>

long long int gcd(long long int m,long long int n)
{
  if(n==0)
    return m;
  else if (m==0)
      return n;
  if(m>n)
    return gcd(n,m%n);
  else
    return gcd(m,n%m);      
}

int main()
{
  long long int w,h;
  while(1)
  {
    scanf("%lld %lld",&w,&h);
    if(w==0 && h==0)
      break;
    if(w==h)
    {
      printf("\n1");
      continue;
    }  
    else if(w>h)
    {
       if(w%h ==0)
         printf("\n%lld",w/h);
       else
         printf("\n%lld",(w*h)/gcd(w,h));    
    }  
    else
    {
       if(h%w ==0)
         printf("\n%lld",h/w);
       else
         printf("\n%lld",(w*h)/gcd(h,w));        
    }
  }
  return 0;
}

