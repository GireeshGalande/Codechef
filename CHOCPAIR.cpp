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
		long n,k;
		cin>>n>>k;
		long a[n],b=0;
		for(int j=0;j<n;j++)
			cin>>a[j];
		int c=sizeof(a)/sizeof(a[0]);
		sort(a,a+c);
		for(int j=0;j<n-1;j++)
		{ for(int l=j+1;l<n;l++)
				{if((a[j]+a[l])==k)b++;
				else if((a[j]+a[l])>k)break;}
		  if(a[j]>=k)break;
		}
		cout<<b<<"\n";
	}
	return 0;
}


