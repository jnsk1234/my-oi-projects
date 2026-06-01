#include<bits/stdc++.h>
using namespace std;

void px(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		cout<<"元素"<<key<<"插入后的结果：";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<' ';
		}
		cout<<endl;
	}
}
int main()
{
	int arr[]={2,8,7,9,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	px(arr,n);
	cout<<"最后排序结果：";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<' ';
	 } 
    return 0;
}

