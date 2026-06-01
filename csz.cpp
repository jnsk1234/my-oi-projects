#include<bits/stdc++.h>
using namespace std;
void ints(int arr[],int n,int m)
{
	for(int i=0;i<=m;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ints(arr,n,m);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	}
    return 0;
}

