#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    for(;;){
        c++;
        vector<int> a;
        while(n){
            a.push_back(n%10);
            n/=10;
        }
        int _=1;
        int sum=0;
        for(int i:a){
            sum+=i*_;
            _*=10;
        }
        if(sum==495){
            return cout<<c,0;
        }
    }
   
}
