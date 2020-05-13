#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
	{
	  int a,b;
	  cin>>a>>b;
	  int c=0,d=0;
	  for(int j=1,k=2;j<=1000,k<=1000;j=j+2,k=k+2)
		{
		  c+=j;
		  if(c>a){cout<<"Bob\n";
					break;}
		  d+=k;
		  if(d>b)
			  {cout<<"Limak\n";
					break;}
		}
	}
	return 0;
}

