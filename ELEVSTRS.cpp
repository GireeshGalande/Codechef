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
		int n,v1,v2;
		cin>>n>>v1>>v2;
		float t1=(sqrt(2)*n)/v1;
        float t2=(2.0*n)/v2;
		if(t1<t2)cout<<"Stairs\n";
		else if(t2<t1) cout<<"Elevator\n";
	}
	return 0;
}