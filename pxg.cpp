#include<bits/stdc++.h>
using namespace std;
void px(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
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
		cout<<"µÚ"<<i+1<<"ÌËÅÅÐòºóÎª";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<' ';
		}
		cout<<endl;
	 } 
}
int main()
{
	int arr[]={4,9,7,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	px(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	}
    return 0;
}

