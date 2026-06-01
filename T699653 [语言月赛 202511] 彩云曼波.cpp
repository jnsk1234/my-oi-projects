#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int a[10];
int n;
int result;
int main() {
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    a[i]=i;
  }
   sort(a+1, a+n+1); // 确保从最小排列开始
   do {
       for(int i=1;i<=n;i++)
       {
        cout<<a[i]<< ' ';
       }
       cout << endl; fflush(stdout);
       cin >> result;
        // 当你读入 1 后，应当立即结束程序。
      if(result) return 0;
   } while (next_permutation(a+1, a+n+1)); // 获取下一个排列
   return 0;
}