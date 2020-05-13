#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,y,z;
	cin>>t;

    for(int i=0;i<t;i++)
    { string x="",q;
          int p=0;
    	cin>>n;
    	y=0;
    	int  a[6]={0};
    	for(int j=0;j<n;j++)
    	{
    		cin>>q;
             x+=q;
         }
    		for(int k=0;k<x.length();k++)
    		{
    			if(x[k]=='c')
                   a[0]++;
                else if(x[k]=='o')
                   a[1]++;
               else if(x[k]=='d')
                   a[2]++;
               else if(x[k]=='e')
                   a[3]++;
               else if(x[k]=='h')
                   a[4]++;
               else if(x[k]=='f')
                   a[5]++;
    		}
         z=a[0];
    	for(int j=0;j<6;j++)
              if(a[j]<z)
          	{
          		z=a[j];
          		p=j;
          	}
              	if(p==0||p==3)
           y=z/2;
        else if((a[0]>=2*z)&&(a[3]>=2*z))
           y=z;
      cout<<y<<"\n";
        }
        return 0;
    }
