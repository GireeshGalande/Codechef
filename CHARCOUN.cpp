#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,r,l,x;
	cin>>t;
	string s;char b;
	for(int i=0;i<t;i++)
	{
      cin>>n>>r>>l>>b;
      getline(cin,s);
      s=b+s;
	  for(int j=0;j<n;j++)
	  {
        x=s[j];
        if(x>=65&&x<=90)
			{x+=32;
			if(x+r<=122)
				s[j]=x+r;
			else
			{x=x+r-122;
		      s[j]=96+x;
			}
			}
		else if(x>=97&&x<=122)
			{ x-=32;
			   if(x-l>=65)
				s[j]=x-l;
			else
			{x=65-x-l;
		      s[j]=91-x;
			}
			}
	  }
	  cout<<s<<"\n";
	  x=1;
	  sort(s.begin(),s.end());
      for(int j=0;j<n;j++)
         if(s[j]==s[j+1])
           x++;
         else
         {
             if(s[j]!=32)
                cout<<s[j]<<" "<<x<<" ";
             x=1;
         }
	  		  
			  cout<<"\n";
	}
	
	return 0;
}
