#include<bits/stdc++.h>
using namespace std;
string s;
void d(int l,int r,int x)
{
    // cout<<"?";
    int flag=0,cnt=0,nl=0,nr=0;
    // cout<<x;
    while(x--)
    {
        for(int j=l;j<r;j++)
        {
            // cout<<cnt<<'!';
            if(flag==0&&cnt==0&&s[j]!='['&&s[j]!=']')
            {
                cout<<s[j];
            }
            if(flag==0&&cnt==0&&s[j]=='[')
            {
                nl=j;
                cnt++;
                flag=1;
            }
            else if(flag==1&&cnt!=0&&s[j]=='[')
            {
                cnt++;
                flag=1;
            }
            if(flag==1&&cnt!=0&&s[j]==']')
            {
                cnt--;
                if(cnt==0)
                {
                    nr=j;int cnt2=0;
                    for(int i=nl+1;i<nr;i++)
                    {
                        
                        if(s[i]>='0'&&s[i]<='9')
                        {
                            cnt2*=10;
                            cnt2+=(s[i]-'0');
                            nl++;
                        }
                        else{
                            break;
                        }
                    }
                    d(nl+1,nr,cnt2);
                    flag=0;
                }
            }
        }
    }
}
int main()
{
    cin>>s;
    // cout<<s[s.size()-1];
    d(0,s.size(),1);
    return 0;
}
//  [2[2[2CB]]]