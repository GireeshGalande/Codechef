#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{ int x=0;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		for(int j=0;j<n-1;j++)
		{if(a[j]>a[j+1])
			   x++;
         if(x>1)break;
		}
		if(x==1&&(a[0]>=a[n-1]))
			cout<<"YES\n";
        else if(x==0)
            cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
