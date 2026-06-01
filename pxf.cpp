#include<bits/stdc++.h>
using namespace std;
void px(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(i!=min)
		{
			swap(arr[i],arr[min]);
		}
	}
}
int main()
{
	int s[]={4,5,2,1,3};
	int n=sizeof(s)/sizeof(s[0]);
	px(s,n);
	for(int i=0;i<n;i++)
	{
		cout<<s[i]<<' ';
	}
    return 0;
}

