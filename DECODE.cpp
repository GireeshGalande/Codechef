#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	string a[20]={"19","1119","3119","132119","1323119","13233119","132333119","1323333119","13233333119",
		"132333333119","1323333333119","13233333333119","132333333333119","1323333333333119","13233333333333119",
		"132333333333333119","1323333333333333119","13233333333333333119","132333333333333333119",
		"1323333333333333333119"};
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		cout<<a[n-1]<<"\n";
	}
	return 0;
}

	
