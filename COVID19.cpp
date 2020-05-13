#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,c=1;
		cin>>n;

		vector<int> v(n),a(n-1),b;
		for(int i=0;i<n;i++)
			{
			    cin>>v[i];
			    if(i>=1)
				a[i-1]=v[i]-v[i-1];
            }
		if((v[1]-v[0])>2||(v[n-1]-v[n-2])>2)b.push_back(1);
		for(int i=0;i<n-1;i++)
			{
			    if(a[i]<=2&&i==n-2)
                {
                    c++;
                    b.push_back(c);
                }
				else if(a[i]<=2)
					c++;
				else
				{
					b.push_back(c);
					c=1;
				}
			}



        cout<<*min_element(b.begin(),b.end())<<" "<<*max_element(b.begin(),b.end())<<"\n";
	}
	return 0;
}
