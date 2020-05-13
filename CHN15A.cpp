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
		int n,k,l=0;
		cin>>n>>k;
		int a[n];
		for(int j=0;j<n;j++)
		{cin>>a[j];
		 a[j]+=k;
		 if((a[j]%7)==0)l++;
		}
		cout<<l<<"\n";
	}
	return 0;
}

