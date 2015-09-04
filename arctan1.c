#include<stdio.h>
int main() 
{
    long long a, b, c,t;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&a);
        b=a+1;
        c=(a*(a+1))+1;
        printf("\n%lld",b+c);
    }
    return 0;
}
