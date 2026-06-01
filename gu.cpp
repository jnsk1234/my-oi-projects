#include<iostream>
using namespace std;
int main()
{
	char s[101];
	int n=0;
	char d;
	while(true)
	{
		cin>>d;
		if(d=='.')
		{
			break;
		}
		s[n]=d;
		n++;
	}
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
	}
    return 0;
}

