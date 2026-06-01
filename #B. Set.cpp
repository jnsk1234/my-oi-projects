#include<bits/stdc++.h>
using namespace std;
map <int,int> a;
map <int,int> c;
multiset <int> b;
string s; 
int n,x;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		cin>>x;
		if(s=="add"){
			b.insert(x);
			a[x]++;
			c[x]++;
			cout<<a[x];
		}
		else if(s=="del")
		{
			cout<<a[x];
			//cout<<' '<<x;
			a[x]=0;
		}else if(s=="ask"){
			if(c[x]!=0){
				cout<<1;
			}else{
				cout<<0;
			}
			cout<<' '<<a[x];
		}
		cout<<endl;
	}


    return 0;
}

