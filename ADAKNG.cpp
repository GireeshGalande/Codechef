#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,r,c,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>r>>c>>k;
		if((r==1&&c==1)||(r==1&&c==8)||(r==8&&c==1)||(r==8&&c==8))
		{if(k<=7)             
			cout<<pow(k+1,2)<<"\n";
	     else
			 cout<<"64\n";
		}
		else if(r==1||c==1||r==8||c==8)
		{if(k==1)
            cout<<"6\n";
         else if(k<=6)
             cout<<pow(k+2,2)<<"\n";
		 else cout<<"64\n";
		}		 
		else 
		{
			if(k==1)
				cout<<"9\n";
			else if(k<=5)
				cout<<pow(k+3,2);
			else
				cout<<"64\n";
		}
	}
	return 0;
}