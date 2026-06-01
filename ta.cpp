#include<algorithm>
#include<string>
#include<iostream>
 
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i;i<s.size();i++)
	{
		if(s[i]=='a'){
			cout<<'b';
		}
		else{
			cout<<'a';
		}
	}
    return 0;
}

