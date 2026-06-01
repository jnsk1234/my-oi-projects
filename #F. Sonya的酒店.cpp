#include<bits/stdc++.h>
using namespace std;
int n,d,x[105],cnt,s[215],a;
int main()
{
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}

	for(int i=0 ;i<n;i++)
	{
		s[i*2]=x[i]-d;
		s[i*2+1]=x[i]+d;
	}
	
	sort(s, s + 2 * n);
	int n2=0;
	int sx[210];
    if (2 * n > 0) {
        sx[0] = s[0];
        n2 = 1;
        for (int i = 1; i < 2 * n; ++i) {
            if (s[i] != s[i - 1]) {
                sx[n2++] = s[i];
            }
        }
    }
    cnt=n2;
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n;j++)
		{
			a=abs(sx[i]-x[j]);
			//cout<<a[i]<<' ';
			if(a<d)
			{
				cnt--;
				break;
				
			}

		}
	} 
	cout<<cnt;

    return 0;
}

