#include<LiquidCrystal.h>//声明LCD液晶函数库

const int rs = 3, en = 5, d4 = 10, d5 = 11, d6 = 12, d7 = 13;//定义引脚，且const定义的常变量不被改变使代码更加健壮
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);//声明4线数据口模式连线

int i;//定义一个数字

void setup()
{
    lec.begin(16,2);//初始化液晶同时定义液晶工作范围是2行16列

    while (1) {
        lcd.home();//光标回到左上角，从左上角从左向右输出
        lcd.print("Hi,");//输出字符串，一个字母占一格，下同
        lcd.setCursor(0,1);//光标定位到第二行第一列
        lcd.print("nice to meet you!");
        delay(2000);

        //字符闪烁，利用display和noDisplay
        for (i = 0; i < 8; i++) {
            lcd.noDisplay();
            delay(500);
            lcd.Display();
            delay(500);
        }

        //屏幕整体左移，每次移动一格
        for (i = 0; i < 20; i++) {
            lcd.scrollDisplayLeft();
            delay(500);
        }

        lcd.clear();//清屏，光标同时回到左上角
        lcd.print("Arduino");
        lcd.setCursor(0,1);
        lcd.print("Open source");
        delay(2000);
        lcd.clear();//再次清屏
    }
}

void loop()
{
    //函数在setup中全部定义好了，所以loop中不需写内容
}