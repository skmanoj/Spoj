#include<stdio.h>


int f[500001];
int a[200000];

int checkmax(int a,int b)
{
   if(a>b)
     return a;
   return b;  
}

int main() 
{
int testCases;
scanf("%d", &testCases);
int cnt=0,testCase,maxv=0;
for(testCase=1;testCase<=testCases;testCase++)
{
scanf("%d", &a[cnt]);
maxv=checkmax(maxv,a[cnt]);
++cnt;
}

int i,j;
for(i=1;i<=maxv;++i){
for(j=i+i;j<=maxv;j+=i)f[j]+=i;
}

for(i=0;i<cnt;i++)
{
printf("%d\n", f[a[i]]);
}

return 0;
}
