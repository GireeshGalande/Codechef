#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    long n,y;
    double x;
    for(long i=0;i<t;i++)
    {
    	x=0;
    	y=0;
    	cin>>n;
    	double a[n];
    	for(int j=0;j<n;j++)
    	{
    		cin>>a[j];
    		x+=a[j];
    	}
    	x/=n;
    	for(int j=0;j<n;j++)
    		if(a[j]==x)
    			{
    				y=j+1;
    				break;
    			 }
    	if(y==0)
    	   cout<<"Impossible\n";
    	else
    		cout<<y<<"\n";
    		}
    return 0;

    }