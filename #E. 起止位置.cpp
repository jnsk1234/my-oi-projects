#include<bits/stdc++.h>
using namespace std;
map<int,int> beginw;
map<int,int> endw;
int x,n,q;
int main()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(beginw.count(x)==1)
		{
			endw[x]=i;
		}else{
			beginw[x]=i;
			endw[x]=i;
		}
	}
	for(int i=1;i<=q;i++){
		cin>>x;
		
		if(beginw.count(x)==1)
		{
			cout<<beginw[x]<<' '<<endw[x]<<endl;
		}
		else{
			cout<<"-1 -1"<<endl;
		}
	}
    return 0;
}

