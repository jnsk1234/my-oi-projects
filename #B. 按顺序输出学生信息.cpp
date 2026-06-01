#include<bits/stdc++.h>
using namespace std;
struct A{
	int id;//Ñ§ºÅ 
	string name;
	int old;
	string sc;
}a[1005];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].id>>a[i].name>>a[i].old;
		getchar();
		getline(cin,a[i].sc);
	}
	for(int i=1;i<=n;i++)
	{
		cout<<a[i].id<<' '<<a[i].name<<" "<<a[i].old<' '<<a[i].sc<<endl;
	}
    return 0;
}

