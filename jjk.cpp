#include<bits/stdc++.h>
using namespace std;
void px(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		
		for(int i=0;i<=n-1;i++)
		{
			int min=0;
			for(int j=i;j<n;j++)
			{
				if(arr[i]<arr[min])
				{
					min=j;
				}
			}
			
		 } 
		 if(i!=min)
		 {
		 	swap(arr[i],arr[min]);
		 }
		 cout<<"µÚ"<<i<<"ÌË£º";
		 for(int i=0;i<n;i++)
		 {
		 	cout<<arr[i]<<' ';
		  } 
		  cout<<endl;
	}
}
int main()
{
	int arr[]={2,5,3,4,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	px(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	}
    return 0;
}

