#include<bits/stdc++.h>
using namespace std;
void getSum(int n,int &c,int &x)
{
    int sum;
    for (sum = 0; n > 0; sum += n % 10, n /= 10);
	if(sum>=10)
        getSum(sum,c,x);
	else if(sum==x)c++;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long t;
	cin>>t;
	for(long i=0;i<t;i++)
	{
		int n,m,x,b=0;
		cin>>n>>m>>x;
		for(int j=n;j<=m;j++)
	    	getSum(j,b,x);
		cout<<b<<"\n";
	}
	return 0;
}
