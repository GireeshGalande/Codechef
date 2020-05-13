#include<bits/stdc++.h>
using namespace std;
void longestAlternating(long long arr[], int n)
{
    int count[n];
    count[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] * arr[i + 1] < 0)
            count[i] = count[i + 1] + 1;
        else
            count[i] = 1;
	}
		for (int i = 0; i < n; i++)
        cout << count[i] << " ";
	cout<<"\n";
    }
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
  long long a[n];
  for(int j=0;j<n;j++)cin>>a[j];
  int b=sizeof(a)/sizeof(a[0]);
longestAlternating(a,b);
	}
	return 0;
}
