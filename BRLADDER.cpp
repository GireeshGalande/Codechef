#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
	{
		long a,b;
		cin>>a>>b;
         if(a%2==0)
            if(b==a+2||b==a-1||b==a-2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        else
            if(b==a+2||b==a+1||b==a-2)
                cout<<"YES\n";
            else
               cout<<"NO\n";
		}
	return 0;
}

