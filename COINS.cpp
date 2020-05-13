#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long a;
	cin>>a;
	long b=a/2;
	long c=a/3;
	long d=a/4;
	if((b+c+d)>a)cout<<b+c+d<<"\n";
	else cout<<a<<"\n";
	
	return 0;
}
