#include<bits/stdc++.h>
using namespace std;
// int a,b,z,x,y;
int main()
{
    for(int a=0;a<=9;a++)
    {
        for(int b=0;b<=9;b++)
        {
            for(int x=0;x<=9;x++)
            {
                for(int y=0;y<=9;y++)
                {
                    for(int z=0;z<=9;z++)
                    {
                        if((100*b)+(10*a)+z-(10*y)-x==85)
                        {
                            if((100*z)+(10*a)+b-(10*x)-y==733)
                            {
                                cout<<b<<a<<z<<endl;
                                cout<<y<<x;
                            }
                        }
                    }
                }
            }
        }
    }
    
    
    return 0;
}