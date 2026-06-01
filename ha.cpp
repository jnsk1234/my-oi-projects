#include<bits/stdc++.h>
using namespace std;
int px(int arr[],int n)
{
	int f=0;
	for(int i=0;i<=n-1;i++)
	{
		int min=i;
		for(int j=i;j<=n;j++)
		{
			if(arr[min]<arr[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			swap(arr[i],arr[min]);
			f++;
		}
	}
	return f;
}
int main()
{
	int n;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	int r=px(m,n);
	cout<<r;
    return 0;
}

