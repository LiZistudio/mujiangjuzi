#define _CRT_SECURE_NO_WARNINGS 1

//	____                      ____
///	|	|                  / |    |
//|	|	|                  | |____|
//|	|	|                  |/____/
//|	|	|                   ______
//|	|	|                 / |     |  
//|	|	|______________   | |     |  
//|	|__________________|  | |     |
//|/___________________/  | |_____|
//                        | /_____/	
//

/*************************************************
* 文件名：鼠标操作
* 创建人：LiShendu
* 日期：
* 描述：
* 修改人：LiShendu
* 日期：
* 版本：
**************************************************/

#include <graphics.h>
#include <conio.h>

int main()
{
	// 初始化图形窗口
	initgraph(640, 480);

	ExMessage m;		// 定义鼠标消息

	while (true)
	{
		// 获取一条鼠标消息
		m = getmessage();

		switch (m.message)
		{
		case WM_MOUSEMOVE:
			// 鼠标移动的时候画红色的小点
			putpixel(m.x, m.y, RED);
			break;

		case WM_LBUTTONDOWN:
			// 如果点左键的同时按下了 Ctrl 键
			if (m.ctrl)
				// 画一个大方块
				rectangle(m.x - 10, m.y - 10, m.x + 10, m.y + 10);
			else
				// 画一个小方块
				rectangle(m.x - 5, m.y - 5, m.x + 5, m.y + 5);
			break;

		case WM_RBUTTONUP:
			return 0;	// 按鼠标右键退出程序
		}
	}

	// 关闭图形窗口
	closegraph();
	return 0;
}
