#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h;
	float l,x,z,y;
	cin>>h>>l;
    x=(h/360.0)*l;
        z=(x-int(x))*60;
    if(x>=12)x=int(x)%12;
    x=0.5*(int(x)*60+z);
    z=6*z;
    y=abs(x-z);
    y=min(360-y,y);
    printf("%.2f",y);
    return 0;
}

