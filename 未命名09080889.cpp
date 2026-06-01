#include<iostream>
using namespace std;
int main()
{
	int n;
	char ch;
	cin >> n >> ch;
	for (int i = 1; i <= n; i++){
		//空格处理
		for (int j = 1; j <= n - i + 1; j++)
		{
			cout << ' ';
		}
		//符号处理
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << ch;
		}
		cout << endl;
	}
	return 0;
}
