#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
     int n;long long k,z=0;
	 cin>>n>>k;
     long long a[n];
	 for(int j=0;j<n;j++)
		{
		    cin>>a[j];
		    long long x=a[j]/k;
		    long long y=a[j]%k;
		    if(y!=0)
            {    long long p=((x+1)*k)-a[j];
                if(p<y)z+=p;
                else z+=y;
            }
		}
     cout<<z<<"\n";
	}
	return 0;
}