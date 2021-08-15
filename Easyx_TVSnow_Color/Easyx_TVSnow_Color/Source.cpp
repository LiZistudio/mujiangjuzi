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
* 文件名：
* 创建人：LiShendu
* 日期：
* 描述：
* 修改人：LiShendu
* 日期：
* 版本：
**************************************************/

/**
* 测试——绘制⚪
*/
//#include <graphics.h>      // 引用图形库头文件
//#include <conio.h>
//int main()
//{
//    initgraph(640, 480);   // 创建绘图窗口，大小为 640x480 像素
//    circle(200, 200, 100); // 画圆，圆心(200, 200)，半径 100
//    _getch();              // 按任意键继续
//    closegraph();          // 关闭绘图窗口
//    return 0;
//}
//**************************************************************************
/**
* 电视雪花效果
*/
#include <graphics.h>      // 引用图形库头文件
#include <conio.h>
#include <time.h>
#include <cstdlib>
int main()
{
    srand((unsigned int)time(NULL));
    initgraph(640, 480, EW_NOMINIMIZE|EW_SHOWCONSOLE);   // 创建绘图窗口，大小为 640x480 像素
    while (1) {
        for (int i = 0; i <= 640; i++) {
            for (int j = 0; j < 480; j++) {
                putpixel(i, j, rand() % 2 == 1 ? BLACK : WHITE);//黑白版本的
                ///*彩色雪花*/
                //int color = rand() % 0x233233;
                //putpixel(i, j, color);
            }
        }
    }
}
