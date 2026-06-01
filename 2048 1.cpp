Board board;
while (true)
{
 board.Clear();//清空棋盘，将步数、分数复位
 board.Initialize();//初始化，添加两个数
 board.Print();//输出棋盘
 while (!board.GameOver())
 {
 char ch = _getche();//从键盘获得指令
 DIR dir = 0;
 switch (ch)//a,d,w,s控制移动
 {
 case 'a':dir = LEFT; break;
 case 'd':dir = RIGHT; break;
 case 'w':dir = UP; break;
 case 's':dir = DOWN; break;
 default: break;
 }
 if (board.Move(dir))board.AddNum();//若为有效操作，则添加新数
 else puts("无效操作!");
 board.Print();//输出棋盘
 }
}
