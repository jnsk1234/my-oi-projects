#include <bits/stdc++.h>
using namespace std;
int net[1000005];
string s1, s2;
set<int >a;
void scnet()
{
    int len = 0;
    int i = 1;
    while (i < s2.size())
    {
        if (s2[i] == s2[len])
        {
            len++;
            net[i] = len;
            i++;
        }
        else
        {
            if (len == 0)
            {
                net[i] = 0;
                i++;
            }
            else
            {
                len = net[len-1];
            }
        }
    }
}
void kmp()
{
    int i = 0;
    int j = 0;
    while (i < s1.size())
    {
        if (s1[i] == s2[j])
        {
            j++;
            i++;
        }
        else
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = net[j - 1];
            }
        }
        if (j == s2.size())
        {
            a.insert(i - j + 1) ;
        }
    }
}
int main()
{
    cin >> s1 >> s2;
    scnet();
    kmp();
    for(int i:a)
    {
        cout<<i<<"\n";
    }
    for(int i=0;i<s2.size();i++)
    {
        cout<<net[i]<<" ";
    }
    return 0;
}