#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    long n,p,x,y;
    for(int i=0;i<t;i++)
    {   x=0;
    	y=0;
    	cin>>n;
        for(int j=0;j<n;j++)
        {
        	cin>>p;
        	if(p>0)
        		x++;
        	else 
        		y++;
        }
        if(x>=y)
        	{
        		if(y!=0)
	        		cout<<x<<" "<<y<<"\n";
	        	else
	        		cout<<x<<" "<<x<<"\n";
	        }
        else
        	{
        		if(x!=0)
	        		cout<<y<<" "<<x<<"\n";
	        	else
	        		cout<<y<<" "<<y<<"\n";
        	}
     }
     return 0;   
}
	