#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005];
int n;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	b[1]=a[1];
	for(int i=2;i<=n;i++){
		b[i]=max(b[i-1],a[i]);
	}
	for (int i = n; i >= 1; i--) {
   		cout << b[i] << " ";
	}
    return 0;
}

