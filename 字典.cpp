#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int M=10;
const int N=20;
char word[M][N+1];
int main()
{
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>word[i];	
	}
	for(int i;i<m;i++)
	{
		int k=i;
		for(int j=i+1;j<m;j++)
		{
			if(strcmp(word[k],word[j])>0)
			{
				k=j;
			}
		}
		if(k!=i)
		{
			swap(word[i],word[k]);
		}
	}
	for(int i=0;i<m;i++)
	{
		cout<<word[i]<<endl;
	}
	return 0;
}
