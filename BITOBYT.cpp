#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{unsigned long long n,a=0,b=0,c=0;
	cin>>n;
	int k=n%26;
	int x=n/26;
	if(k>=1&&k<=2)
		a=pow(2,x);
	else if(k>=3&&k<=10)
		b=pow(2,x);
	else if(k>=11&&k<=25)
		c=pow(2,x);
	else if(k==0)
        c=pow(2,x-1);
	cout<<a<<" "<<b<<" "<<c<<"\n";
	}
	return 0;
}