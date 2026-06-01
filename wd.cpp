
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int f;
	cin>>f;
    int a[f+5];
    for(int i=0;i<f;i++)
    {
    	cin>>a[i];
	}
    int temp[f+5] = {0};
    int result[f+5];  //下标
    int n = sizeof(a)/sizeof(a[0]);   //数组长
    int i;
    //赋值到临时数组
    for (i = 0; i < n; ++i)
        ++temp[a[i]];
    //数值重叠
    for (i = 1; i < 100; ++i)
        temp[i] += temp[i-1];
    //??俺不懂。。。
    for (i = 0; i < n; ++i)
        result[--temp[a[i]]] = i;
    //输出下标
    for (i = 0; i < n; ++i)
        printf("%d ", result[i]);

    system("PAUSE");
    return EXIT_SUCCESS;
}
