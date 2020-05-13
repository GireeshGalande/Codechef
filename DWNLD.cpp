#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{ 
		int n,k,c=0;
		cin>>n>>k;
		int a,b;
		for(int j=0;j<n;j++)
		{
		    cin>>a>>b;
		    if(a>k)
            {
                c+=((a-k)*b);
                k=0;
            }
            else
            k-=a;
		}

		cout<<c<<"\n";
	}
	return 0;}
