#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a,b,z;
	cin>>t;
	for(int i=0;i<t;i++)
	{   z=0;
		vector< pair <int , int > >y;
		cin>>a>>b;
	    char x[a][b];
		for(int j=0;j<a;j++)
			for(int k=0;k<b;k++)
			{cin>>x[j][k];
			 if(x[j][k]=='#')
			 {y.push_back(make_pair(j,k));
			 z++;}
			}
	    if(z==0)
			cout<<"YES\n";
		else if(a==2||b==2)
			cout<<"NO\n";
		else
{bool p=true;
for(int j=0;j<y.size();j++)
  if((y[j].first==1)||(y[j].first==a-2)
	||(y[j].second==1)||(y[j].second==b-2))
	  {p=false;break;}
 if(p)
	 for(int j=0;j<y.size();j++)
	 { for(int k=j+1;j<y.size();j++)
		 { if((y[j].first==y[k].first)
		 &&((y[k].second-y[j].second)==2))
			 {p=false;break;}
        else if((y[j].second==y[k].second)
		&&((y[k].first-y[j].first)==2))
		{p=false;break;}
		 }
      if(p==false)break;
	 }
 if(p)cout<<"YES\n";
  else cout<<"NO\n";
}
	}
return 0;
}
