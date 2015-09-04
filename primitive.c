#include<stdio.h>

int p[10010];

void prime()
	{
	        int i,j;
		for(i=2 ; i*i <=10000 ; i++ )
		 if(!p[i])
		 for(j = i*i ; j <=10000 ; j += i ) p[j]=1;
		//for(int i=2; i <= 20 ; i++) if(!p[i]) cout<<i<<" ";cout<<endl;
	}

int main()
	{
		prime();
		int n , t , x=1 ;
		scanf("%d",&t);
		while(t>0)
		{
			scanf("%d",&n);
			if( n == 3 ) printf("%d:2\n", x++);
			else if ( !p[n] ) printf("%d:1\n",x++);
			else printf("%d:NOTPRIME\n",x++);
			t--;
		}
		return 0;

	}

