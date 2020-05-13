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
     long long c,d,l,x,y;
	 cin>>c>>d>>l;
     if(c>2*d)x=4*(c-d);
     else x=4*d;
     y=4*(c+d);
   if(l>=x && l<=y && l%4==0)
            cout<<"yes\n";
   else cout<<"no\n";
	}
	return 0;
}