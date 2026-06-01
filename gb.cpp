#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    
    cin >> str;
 	int len = str.length();
 	int h;
    cin>>h;
	for(int i=1;i<=h;i++)
	{
		char s[10];
		cin>>s;
		if(s=="<<")
		{
			int n;
			cin>>n;
			str = str.substr(n) + str.substr(0, n);
		}
		if(s==">>")
		{
			int n;
			 
			cin>>n;
			
			str = str.substr(len - n) + str.substr(0, len - n);
		}
		if(s=="R")
		{
			str(str.rbegin(), str.rend());
		}
	}	
    
	cout<<str;
    

    return 0;
}
