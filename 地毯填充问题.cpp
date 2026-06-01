#include<bits/stdc++.h>
using namespace std;
int n,px,py;
int a[2000][2000];
void d(int x,int y,int z,int lx,int ly)
{
    if(z==2)
    {
        if(x==lx&&y==ly)
        {
            cout<<x+1<<' '<<y+1<<" "<<1<<"\n";
        }
        else if(x==lx&&y+1==ly)
        {
            cout<<x+1<<' '<<y<<" "<<2<<"\n";
        }
        else if(x+1==lx&&y==ly)
        {
            cout<<x<<' '<<y+1<<" "<<3<<"\n";
        }
        else if(x+1==lx&&y+1==ly)
        {
            cout<<x<<' '<<y<<" "<<4<<"\n";
        }
        return ;
    }
    else if(lx<=x+(z/2)-1&&ly<=y+(z/2)-1)
    {
        cout<<x+(z/2)<<' '<<y+(z/2)<<" "<<1<<"\n";
        d(x,y,z/2,lx,ly);
        d(x,y+(z/2),z/2,x+(z/2)-1,y+(z/2));
        d(x+(z/2),y,z/2,x+(z/2),y+(z/2)-1);
        d(x+(z/2),y+(z/2),z/2,x+(z/2),y+(z/2));
    }
    else if(lx<=x+(z/2)-1&&ly>=y+(z/2))
    {
        cout<<x+(z/2)<<' '<<y+(z/2)-1<<" "<<2<<"\n";
        d(x,y,z/2,x+(z/2)-1,y+(z/2)-1);
        d(x,y+(z/2),z/2,lx,ly);
        d(x+(z/2),y,z/2,x+(z/2),y+(z/2)-1);
        d(x+(z/2),y+(z/2),z/2,x+(z/2),y+(z/2));
    }
    else if(lx>=x+(z/2)&&ly<=y+(z/2)-1)
    {
        cout<<x+(z/2)-1<<' '<<y+(z/2)<<" "<<3<<"\n";
        d(x,y,z/2,x+(z/2)-1,y+(z/2)-1);
        d(x,y+(z/2),z/2,x+(z/2)-1,y+(z/2));
        d(x+(z/2),y,z/2,lx,ly);
        d(x+(z/2),y+(z/2),z/2,x+(z/2),y+(z/2));
    }
    else
    {
        cout<<x+(z/2)-1<<' '<<y+(z/2)-1<<" "<<4<<"\n";
        d(x,y,z/2,x+(z/2)-1,y+(z/2)-1);
        d(x,y+(z/2),z/2,x+(z/2)-1,y+(z/2));
        d(x+(z/2),y,z/2,x+(z/2),y+(z/2)-1);
        d(x+(z/2),y+(z/2),z/2,lx,ly);
    }
}
int main()
{
    cin>>n>>px>>py;
    d(1,1,pow(2,n),px,py);
    return 0;
}