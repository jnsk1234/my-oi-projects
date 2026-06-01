#include<bits/stdc++.h>
using namespace std;
long long a,b,c,aa,bc;
int main()
{
	cin>>a>>b>>c;
	aa=a*a;
	bc=b*c;
	if(bc<aa)
	{
		cout<<"Alice";
	}else{
		cout<<"Bob";
	}
    return 0;
}

