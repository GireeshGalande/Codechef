#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
	{
	int g;
	cin>>g;
	for(int j=0;j<g;j++)
		{int i,q;
	     long long n;
		 cin>>i>>n>>q;
		 if(n%2==0)
			 cout<<n/2<<"\n";
		 else if(i==q&&n%2==1)
			 cout<<n/2<<"\n";
		 else cout<<n/2+1<<"\n";

	}
	}
	return 0;
}
