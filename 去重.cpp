#include<bits/stdc++.h>
using namespace std;
set <int>a;
int n;
int x; 
int main()
{
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 	cin>>x;
 	a.insert(x);
 }
 for(auto i:a)
 {
 	cout<<i<<' ';
 }


    return 0;
}

