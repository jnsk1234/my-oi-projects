#include<bits/stdc++.h>
using namespace std;
set<int> s;//ս���� 
map<int,int> m;//ս���� id
int n,x,id;
int main()
{
	cin>>n;
	s.insert(1000000000);
	m[1000000000]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>id>>x;
		m[x]=id;
		auto pos=s.lower_bound(x);
		if(pos==s.begin())
		{
			cout<<id<<" "<<m[*pos]<<endl;
		}
		else if(pos==s.end())
		{
			cout<<id<<" "<<m[*prev(pos)]<<endl;
		}
		else
		{
			int pre=*prev(pos);
			if(x-pre<=*pos-x)
			{
				cout<<id<<" "<<m[pre]<<endl;
			}else{
				cout<<id<<" "<<m[*(pos)]<<endl;
			}
		}
		s.insert(x);
		
	}
	
    return 0;
}

