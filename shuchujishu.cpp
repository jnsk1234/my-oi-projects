#include<iostream>
using namespace std;
const int N=100;
int a[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-i;i>=0;i-=2)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
