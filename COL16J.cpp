#include<bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
for(int i=0;i<t;i++)
{   int input,n;
	vector<int>a;
	cin>>n;
	bool x=true,y=true;
	for(int j=0;j<n;j++)
	{cin>>input;
	a.push_back(input);}
	for(int j=1;j<=n;j++)
		if(find(a.begin(),a.end(),j)==a.end())
		{cout<<"no\n";x=false;break;}
	if(x)
		for(int j=0;j<n-1;j++)
			if((a[j]+1)!=a[j+1])
			    {y=false;break;}
	if(y==false&&x)
    {
	sort(a.begin(),a.end());
    	for(int j=0;j<n-1;j++)
		  if(a[j]==a[j+1])
		  {cout<<"no\n";x=false;break;}
    }
	if(y==false&&x)
       cout<<"yes\n";
     else if(y&&x)cout<<"no\n";
}
return 0;
}
   
	  
