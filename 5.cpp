#include<bits/stdc++.h>
using namespace std;
char s[100003];
int main()
{
	cin>>s;
	int n;
	cin>>n;
	int cd=strlen(s);
	for(int i=1;i<=n;i++)
	{
		char s[4];
		cin>>s;
		if(s=="<<")
		{
			int h;
			cin>>h;
			for(int i=1;i<=h;i++)
			{
				int t=s[1];
				for(int j=1;j<n;j++){
				s[j]=s[j+1];
				}			 
				s[n]=t;	
			} 
		}
		if(s==">>")
		{
			int h;
			cin>>h;
			while (h-- != 0) {
				for (int i = 0; i < cd; i++) {
					int a = s[cd-1];
					s[cd - 1] = s[i];
					s[cd] = a;

				}		
			}		
			
		}
		
	}
	cout<<s;
    return 0;
}

