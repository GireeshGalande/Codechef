#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,c;
	cin>>t;
	vector<int> a={2,3,5,7,11,13,17,19,23,29,31,37,
	41,43,47};
	for(int i=0;i<t;i++)
	{ c=0;
		cin>>n;
		vector<int>b;
		for(int j=0;j<n;j++)
		{cin>>b[j];
		 if((find(a.begin(), a.end(),b[j])!=a.end())==false)
		  c++;
	 
		     
		
           			