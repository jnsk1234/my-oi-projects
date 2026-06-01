#include<bits/stdc++.h>
using namespace std;
vector <int> q;
void fun(int x)
{
	if(x==0)
	{
		return;
	}
	q.push_back(x%2);
//	cout<<x%2;
	return fun(x/2);
//	cout<<x%2;
}
int main()
{
	int a;
	cin>>a;
	if(a==0)
	{
		cout<<0;
		return 0;
	}
	fun(a);
	for(int i=q.size()-1;i>=0;i--)
	{
		cout<<q[i];
	}
    return 0;
}

