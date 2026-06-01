#include<bits/stdc++.h>
using namespace std;
int n,o,p;
set<int> a;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>o>>p;
        if(o==1)
        {
            if(a.count(p))
            {
                cout<<"Already Exist\n";
            }else{
                a.insert(p);
            }
        }
        else{
            if(a.empty())
            {
                cout<<"Empty\n";
            }else{
                auto id1=a.lower_bound(p);
               // auto id2=id1--;
                if(id1==a.begin())
                {
                    cout<<(*a.begin())<<"\n";
                    a.erase(*id1);
                }
                else if(id1==a.end())
                {
                    cout<<(*prev(id1))<<"\n";
                    a.erase(*prev(id1));
                }else{
                    if(abs(p-(*id1))<abs(p-(*prev(id1))))
                    {
                        cout<<(*id1)<<"\n";
                        a.erase(*id1);
                    }else{
                        cout<<(*prev(id1))<<"\n";
                        a.erase(prev(id1));
                    }
                }
            }
        }
    }
    return 0;
}