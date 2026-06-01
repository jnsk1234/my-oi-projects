#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[100009],sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)
		{
			sum+=a[i];
		}
	}	
	cout<<sum<<endl;
	return 0;
}
