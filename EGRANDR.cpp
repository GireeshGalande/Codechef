#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n],d=0;
		bool e=true,c=true;
        for(int j=0;j<n;j++)
		{cin>>a[j];
		 if(a[j]==2)e=false;
		 if(a[j]==5)c=false;
		 d+=a[j];
		}
		
        if(e)
		{
		if(((d)>=4*n)&&c)
			cout<<"Yes\n";
		else cout<<"No\n";
		}
		else cout<<"No\n";
	}
	return 0;
}
