#include<bits/stdc++.h>
using namespace std;
double pi=acos(-1.0);
int F,N;
double a[10005];
double chark(double x)
{
	int cnt=0;
	for(int i=1;i<=N;i++){
		cnt+=a[i]/x;
	}
	return cnt>=F;
} 
int main()
{
	cin>>N>>F;
	F=F+1;
	double r=0;
	for(int i=1;i<=N;i++)
	{
		int x;
		cin>>x;
		a[i]=x*x*pi;
		r=max(r,a[i]);
	}
	double l=pi,mid;
	while(l<=r) {
		mid=(l+r)/2;
		if(chark(mid)) {
			l=mid+0.000001;
		} else {
			r=mid-0.000001;
		}
	}
	printf("%.3f",l);
    return 0;
}

