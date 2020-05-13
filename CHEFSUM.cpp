#include<bits/stdc++.h>
using namespace std;
int prefixSum(vector<int>a,int i)
{ int x=0;
 for(int k=0;k<i;k++)
	 x+=a[k];
 return x;
}
int postfixSum(vector<int>a,int i)
{
	int y=0,z=a.size();
 for(int k=z-1;k>=i;k--)
    y+=a[k];
return y;
}
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,input,m,x=1;
		cin>>n;
		vector<int>a,b,c,d;
		for(int j=0;j<n;j++)
		{cin>>input;
		a.push_back(input);}
		for(int j=0;j<n;j++)
		{b.push_back(prefixSum(a,j+1));
		c.push_back(postfixSum(a,j));
		d.push_back(b[j]+c[j]);
		if(j==0)m=d[j];
		else if(m>d[j])
		{m=d[j];x=j+1;}
	    }
	cout<<x<<"\n";
	}
	return 0;
}




METHOD 2:
	
#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
       int n,min,k;
	   cin>>n;
	   int a[n];
	   for(int j=0;j<n;j++)
	   {cin>>a[j];
		if(j==0)
		{min=a[j];
		k=j;}
		else if(min>a[j])
		{min=a[j];k=j;}
	   }
	   cout<<k+1<<"\n";
	}
	return 0;
}