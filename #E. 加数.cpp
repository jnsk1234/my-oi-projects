#include<bits/stdc++.h>
using namespace std;
string a;
string fun(int x,string y)
{
	if(x/2==0)
	{
		return "1";
	}
	a+=to_string(x/2);
	return fun(x/2,y);
	//a+=to_string(x/2);
	//to_string(x/2)
}
int main()
{
	cin>>a;
	int b=stoi(a);
	fun(b,a);
	cout<<a.size();

    return 0;
}

