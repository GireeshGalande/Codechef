#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
     string a;
	 cin>>a;
	 int c=0;
	 int d=a.length();
	 for(int j=0;j<d;j++)
		 if(a[j]=='3')c++;
	 if(d<=3&&c!=3)cout<<"333\n";
	 else if(c==3&&d==3)cout<<"1333\n";
	 else if(d>3&&c<3)
		{for(int j=d-1;j<=0;j--)
			if(a[j]!='3'){a[j]='3';c++;if(c==3)break;}
	    cout<<a<<"\n";
		}
         
	 else if(d>3&&c==3)
		{for(int k=d-1;k<=0;k--)
				if(a[k]!='3')
					     if(a[k]=='2')
							{for(int l=d-1;l>k;l--)
							   { if(a[l]=='3'){a[l]='0';break;}}}
						else if(a[k]=='9'){
						      if(k!=0){a[k]='0';a[k-1]=1+a[k-1];}
						      else{a[k]='0';a='1'+a;}}
		 			    else a[k]=a[k]+1;
        cout<<a<<"\n";}
	   else if(d>3&&c>3)
		{ for(int k=d-1;k<=0;k--)
			if(a[k]=='3')a[k]=a[k]+1;
	      cout<<a<<"\n";}
		else
			cout<<a<<"\n";
		}
		return 0;}