#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
   long long a[55], b[55];
   int T; 
   scanf("%d",&T);  
   while(T--)
   {
       long long n;
       int k; 
       cin>>n>>k;
              
       for(int i=0;i<k;i++)
       {
           cin>>a[i];
          
           if(i==0) b[i] = a[i];
           else b[i] = (b[i-1]<<1)+a[i];
       }   
              
       vector<int> ans;
      
       for(int i = k-1; i >= 0; --i)
       {
           if(b[i]<=n)
           {
               ans.push_back(i+1);
               n -= b[i];  
           }  
       }
      
       if(n > 0)
       {
           puts("-1");  
       }
       else
       {           
           for(int i = ans.size()-1; i >= 0; --i)
           if(i<ans.size()-1) printf(" %d",ans[i]);
           else printf("%d",ans[i]);      
           puts("");  
       }
   } 
   return 0;
}
