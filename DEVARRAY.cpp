#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,q;
	long input,x,k;
	cin>>n>>q;
	vector<long>a(n);
	for(int i=0;i<n;i++)
	{cin>>input;
	a.push_back(input);}
	sort(a.begin(),a.end());
	k=a[a.size()-1];
	for(int i=0;i<q;i++)
	{cin>>x;
     if(x<=k)
		 cout<<"YES\n";
	 else
		 cout<<"NO\n";
	}
	return 0;
}