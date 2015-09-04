#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

int cnt[30];

int main()
	{
		int t ;
		string s , final ;
		for( scanf("%d\n",&t) ; t > 0 ; t-- )
		{
			memset( cnt , 0 , sizeof cnt );
			getline( cin , s );
			int len = s.length();
			for(int i = 0; i < len ; i++) 
				if ( s[i] >= ' ' ) 
					cnt[s[i]-'A']++ ;
			int mx = -1 , ind = -1  ;
			for(int i = 0 ; i < 26 ; i++ ) 
			if ( cnt[i] > mx ) 
				mx = cnt[i] , ind = i ; 

			int c = 0 ;
			for(int i = 0 ; i < 26 ; i++) 
				if (cnt[i]==mx ) 
					c++;
			if ( c>1 ) { cout<<"NOT POSSIBLE\n" ; continue ;} 

			int dist =  ( ind - 4 + 26 ) % 26 ;
			final = "";
			for(int i = 0 ; i < len ; i++)
				if (s[i] !=' ') final += ( char ) (  'A' + ( ( s[i] - 'A' - dist + 26 ) % 26 ) ) ;
				else final += ' ' ;

			cout<<dist<<" "<<final<<endl;

		}
	}

