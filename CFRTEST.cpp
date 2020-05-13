#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,x,c=0;
		cin>>n;
		int a[101]={0};
        a[0]=-1;
		for(int j=0;j<n;j++)
		{cin>>x;a[x]++;}
		for(int j=1;j<101;j++)
			if(a[j]>0)c++;
		cout<<c<<endl;
		
	}
	return 0;
}
		