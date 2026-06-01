#include<bits/stdc++.h>
using namespace std;
vector <int> a;
int k,n,x;
bool flag;
int main() {
	cin>>k>>n;
	for(int i=1; i<=n; i++) {
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int l=0,r=n-1;
	while (l < r) {
        int sum = a[l] + a[r];
        if (sum == k) {
            cout << a[l] << " " << a[r] << endl;
            flag = 1;
            l++;  
            r--;
        } else if (sum < k) {
            l++;  
        } else {
            r--;
        }
    }
	if(flag==0)
	{
		cout<<"No Solution";
	}
	return 0;
}

