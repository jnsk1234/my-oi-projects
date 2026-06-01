#include<iostream>

using namespace std;

int xuanzhuan(int m[100][100],int a1,int a2);

int main()

{

 int i, j, a1, a2, m[100][100], angle;



 cin >> a1 >> a2;


 for (i = 0; i < a1;i++)

  for (j = 0; j < a2;j++)

   cin >> m[i][j];



 xuanzhuan(m, a1, a2);



 return 0;

}

int xuanzhuan(int m[100][100], int a1, int a2)

{

 int i,j,angle;

 char flag = 'Y';

 while (flag != 'N')

 {

  angle=90;

  if (angle == 90)

  {

   

   for (int j = 0; j < a2; j++)

   {

    for ( int i = a1 - 1; i >= 0; i--)

     cout << m[i][j] << " ";

    cout << endl;

   }

  }

 return 0;
}
}

