#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
   for(int i=0;i<t;i++)
   {
   	cin>>n;
    int c=0;
    vector<int>a(n),b(n);
   	for(int j=0;j<n;j++)
   		cin>>a[j];
   	for(int j=0;j<n;j++)
   		cin>>b[j];
   for(int j=0;j<n;j++)
   	  {
   	  	if(j==0)
           { if((a[1]+a[n-1])<b[0])
   	  	         { if(b[0]>c)c=b[0];}}
        else if(j==n-1)
            {if((a[0]+a[j-1])<b[j])
   	  			   {if(b[j]>c)c=b[j];}}

   	  	else if((a[j-1]+a[j+1])<b[j])
   	  	 {if(b[j]>c)c=b[j];}
   	  }
    if(c==0)
        cout<<"-1\n";
     else
        cout<<c<<"\n";
 }
 return 0;
}
