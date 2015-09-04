#include<stdio.h>
int main(){long long a, b, c, k, t, n;scanf("%lld",&t);while(t--){scanf("%lld",&a);n=a*a+1;k=a;while(k) if(!(n%k--)) break;++k;c=k+a;b=(a*c+1)/k;printf("\n%lld",b+c);}return 0;}
