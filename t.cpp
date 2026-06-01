#include<iostream>
using namespace std;
int main() {
	int n,d;
    char s;
    cin>>n>>s>>d;
    if(d==1)
    {
    	for(int i=1;i<=n;i++)
    	{
			for(int j=1;j<=i;j++)
        	{
				cout<<s;
        	}
            cout<<endl;
    	}
    }
    if(d==0)
    {
    	cout<<s<<endl;
    	for(int i=2;i<n;i++)
    	{
    		cout<<s;
    		for(int z=2;z<i;z++)
    		{
    			cout<<' ';
    				
			}
			cout<<s<<endl;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<s;
		}
		
	}
     return 0;
}
