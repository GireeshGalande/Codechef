#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int n,m,d,x;
	for(int i=0;i<t;i++)
	{ cin>>n>>m;
		d=n+m-2;
		int b[d];
		fill(b,b+d,0);
      char a[n][m];
	  vector<int>c,e;
	  for(int j=0;j<n;j++)
	   for(int k=0;k<m;k++)
	   {cin>>a[j][k];
		if(a[j][k]=='1')
		{c.push_back(j);
		e.push_back(k);
		}
	   }
	  for(int j=0;j<c.size()-1;j++)
        for(int k=j+1;k<c.size();k++)
		{x=abs(c[j]-c[k])+abs(e[j]-e[k]);
         b[x-1]++;
		}
			  for(int j=0;j<d;j++)
				  cout<<b[j]<<" ";
			  cout<<"\n";
	}
return 0;
}
