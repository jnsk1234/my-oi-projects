#include<bits/stdc++.h>
using namespace std;

int a;
int n[100000];
int main()
{
	cin>>a;	
	if(a%2==1||a==0)
	{
		cout<<-1;
		return 0; 
	}
	int i=0;
	while(a)
	{
		n[i]=a%2;
		a/=2;
		i++;
	}
	int	s=pow(2,i-1);
	for (int j = i - 1; j >= 0; j--) 
    {
        if (n[j] == 1)
        {
            cout << s << ' ';
        }
        s /= 2;
    }

    return 0;
}
