#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c)
	{
		if(a+c>b)
		{
			if(b+c>a)
			{
				if(a==b)
				{
					cout<<"等腰三角形"; 
				}
				else if(b==c)
					cout<<"等腰三角形"; 
				else if(a==c)
					cout<<"等腰三角形"; 
				else if((a==b)&&(b==c))
				{
					cout<<"等边三角形"; 
				}
				else{
					cout<<"普通三角形"; 
				}
			}
			else{
				cout<<"不是三角形"; 
			}
			
		}
		else{
			cout<<"不是三角形"; 
		}
		
	}
	else{
		cout<<"不是三角形"; 
	}
}

