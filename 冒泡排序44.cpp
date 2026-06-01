#include<iostream>
#include<algorithm>
using namespace std;
const int N=100;
int a[N];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		//TODO
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		//TODO
		for(int j=0;j<n-1;j++){
			//TODO
			if(a[j]>a[j+i])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
	for (int i=0;i<n;i++)
		cout<<" "<<a[i];
	return 0;
}
