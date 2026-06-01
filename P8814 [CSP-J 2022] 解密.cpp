#include<bits/stdc++.h>
using namespace std;
int T;
int main()
{
	cin>>T;
	while(T--)
	{
		long long n,d,e;
		cin>>n>>d>>e;
		long long q1=sqrt((n - e * d + 2)*(n - e * d + 2)-(n*4)) ;
		long long q2=n - e * d + 2;
		long long p=(q1+q2)/2;
		long long q=q2-p;
		if(p*q==n&&(p-1)*(q-1)+1==e*d&&p&&q)
		{
			cout<<min(p,q)<<" "<<max(p,q)<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}


    return 0;
}

