#include<bits/stdc++.h>
using namespace std;
char a[230];
int zm,sz,kg,qt;
int main()
{
	cin.getline(a,230);
	int l=strlen(a);
	
	for(int i=0;i<=l;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			zm++;
		}
		else if(a[i]>='A'&&a[i]<='Z')
		{
			zm++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			sz++;
		}
		else if(a[i]==' ')
		{
			kg++; 
		}
		else
		{
			qt++;
		}
	} 
	
	cout<<zm<<' '<<sz<<' '<<kg<<' '<<qt-1;
    return 0;
}

