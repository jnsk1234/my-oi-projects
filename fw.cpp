#include<bits/stdc++.h>
using namespace std;
void px(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			swap(arr[i],arr[min]);
		}
	}
 } 
int main()
{
	int n;
	cin>>n;
	int f[n];
	for(int i=0;i<n;i++)
	{
		cin>>f[i];
	}
	px(f,n);
	for(int i=0;i<n;i++)
	{
		cout<<f[i]<<' ';
	}
    return 0;
}

