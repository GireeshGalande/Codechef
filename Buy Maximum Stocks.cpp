#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,y=0;
	long long k,x=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>k;
	for(int i=0;i<n;i++)	
	{int j=0;bool p=true;
		while(j<=i)
		{x+=a[i];
	     if(x<=k)
			 y++;
		 else {p=false;break;}
		 j++;
		}
	 if(p==false)break;
	}
    cout<<y<<"\n";	
	return 0;
}