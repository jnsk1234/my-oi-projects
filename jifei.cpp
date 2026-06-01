#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double sum=0;
	int sn=1;
	int n,x;
	cin>>n;
	for(int i=1;1<=n;i++)
	{
		cin>>x;
		if(x<15)
		{
			continue;
		}
		double fee=x/15.0;
		cout<<sn<<" "<<x<<" ";
		cout<<fixed<<setprecision(2)<<fee<<endl;
		sum+=fee;
		sn+=1;
		
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
