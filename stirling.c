    #include <stdio.h>
    int main(){
        int m, n, t;
        scanf("%d", &t);
        while(t--)
        {
           scanf("%d %d", &n, &m);
            printf("%d\n", 0 == ((n - m) & ((m - 1) >> 1)));
        }    
        return 0;
    }
