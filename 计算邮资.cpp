#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,yf=0;
	char c;
	cin>>x>>c; 
	if(x<=1000)
	{
		yf=8;
	}else{
		yf=8;
		x-=1000;
		if(x%500==0)
		{
			yf+=(x/500)*4;
		}
		else{
			yf+=((x/500)+1)*4;
		}
	}
	if(c=='y')
	{
		yf+=5;
	}
	cout<<yf;
	
	
    return 0;
}

