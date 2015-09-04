#include<iostream>
#include<cstdio>
using namespace std;
int res[2000][2000],n,a[2000];
int func(int i,int j)
{
    if(res[i][j]!=-1)
        return res[i][j];
     
    int m;
    m = j-i+1;
    m = n - m+1;
    if(i==j)
        return m*a[i];
         
    res[i][j]= max(m*a[i]+func(i+1,j),m*a[j]+func(i,j-1));
    return res[i][j];
}
int main()
{
 int i,j;
 cin>>n;
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            res[i][j]=-1;
 int ans = func(0,n-1);
 cout<<ans<<endl;
 return 0; 
}
