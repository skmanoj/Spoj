    #include <algorithm>
    #include <cstdio>
    using namespace std;
    int sol[1024], v[1024];
    int main()
    {
         int i;
        for(int n; scanf("%d", &n) == 1; )
        {
            long long ans = 1;
            for(int i = 0; i < n; ++i) scanf("%d", v + i);
            sort(v, v + n);
            for(i = 0; i < n; ++i) sol[i] = v[i];
            for(i = 1; i < n; ++i)
            {
                if(sol[i] == v[i])
                    for(int j = i; j < n; ++j)
                        if(!(v[j] % v[i])){
                            sol[j] /= v[i];
                            sol[j] *= v[i] - 1;
                        }
                ans = (ans * sol[i]) % 1000000007;
            }
            printf("%lld\n", ans);
        }
        return 0;
    }
