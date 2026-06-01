#include <bits/stdc++.h>
using namespace std;
int n,m,a[5],s,c,ans;
int main(){	
	cin>>n>>m;
	if(m==0 && n==1){//对一位数特别判断?
		cout<<0;
		return 0;
	}
	for(int i=1;i<=m;i++){
		cin>>s>>c;
		if(s==1 && c==0 && n>1){//对大于1位的判断一下前导0问题?
			cout<<-1;
			return 0;
		}
		if(a[s]!=0 && a[s]!=c){//有描述冲突的问题?
			cout<<-1;
			return 0;
		}
		a[s]=c;//把当前位放入桶里?
	}
	if(n>1 && a[1]==0){//判断一下最高位有没有描述?
		ans=1;
	}else{
		ans=a[1];
	}
	for(int i=2;i<=n;i++){
		ans=ans*10+a[i];
	}
	cout<<ans;
	return 0;
}

