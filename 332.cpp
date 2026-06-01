#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin>>s;
	while(s.size()%4!=0)
	{
		s='0'+s;
	}
	for(int i=0;s[i];i+=4)
	{
		int t=(s[i]-'0')*8+(s[i+1]-'0')*4+(s[i+2]-'0')*2+(s[i+3]-'0');
		if(t>=10){
			cout<<char(t-10+'A');
		}
		else{
			cout<<t;
		}
	}

    return 0;
}

