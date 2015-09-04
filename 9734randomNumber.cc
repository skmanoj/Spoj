#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
 long long int n,k,*a,i=0,j=0,cnt=0;
 scanf("%lld %lld",&n,&k);
 a=(long long int *)malloc(sizeof(long long int)*n);
 for(i=0;i<n;i++)
   scanf("%lld",&a[i]);
 sort(a,a+n);  

 i=0,j=1;
 while(1)
 {
   if(j>=n)
     break;
   if(i==j)
   {
     j++;
     continue;
   }    
   long long int val=abs(a[i]-a[j]);
   if(val==k)
   {
     cnt++;
     i++;
     j++;
   }
   else if(val > k)
     i++;
   else
     j++;  
 }
   
 printf("%lld",cnt);  
 return 0;
}
