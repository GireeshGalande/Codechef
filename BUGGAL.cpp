#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
	{long a,b,x=0;
	int k=0;
     cin>>a>>b;
      while(a!=0||b!=0)
	  {x=(((a%10)+(b%10))%10)*((int)pow(10,k));
        a=a/10;
		b=b/10;
		k++;
	  }
	  cout<<x<<"\n";
		  }
return 0;}
