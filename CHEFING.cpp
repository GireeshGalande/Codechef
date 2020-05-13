#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int t,p;
	cin>>t;
   	long long n;
   for(int i=0;i<t;i++)
   {
   	cin>>n;
   	p=0;
   	vector<string>x(n);
   	for (int j = 0; j < n; j++)
   	   	cin>>x[j];
   	for(int j=97;j<=122;j++)
    {int z=0;
     for(int k=0;k<n;k++)
   	{
   		size_t found=x[k].find(j);
         if(found!=string::npos)
         	z++;
         else break;
   	}
   	if(z==n)p++;
   }
   cout<<p<<"\n";
}
return 0;
}

