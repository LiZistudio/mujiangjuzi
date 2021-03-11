#include<LiquidCrystal.h>//����LCDҺ��������

const int rs = 3, en = 5, d4 = 10, d5 = 11, d6 = 12, d7 = 13;//�������ţ���const����ĳ����������ı�ʹ������ӽ�׳
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);//����4�����ݿ�ģʽ����

int i;//����һ������

void setup()
{
    lec.begin(16,2);//��ʼ��Һ��ͬʱ����Һ��������Χ��2��16��

    while (1) {
        lcd.home();//���ص����Ͻǣ������ϽǴ����������
        lcd.print("Hi,");//����ַ�����һ����ĸռһ����ͬ
        lcd.setCursor(0,1);//��궨λ���ڶ��е�һ��
        lcd.print("nice to meet you!");
        delay(2000);

        //�ַ���˸������display��noDisplay
        for (i = 0; i < 8; i++) {
            lcd.noDisplay();
            delay(500);
            lcd.Display();
            delay(500);
        }

        //��Ļ�������ƣ�ÿ���ƶ�һ��
        for (i = 0; i < 20; i++) {
            lcd.scrollDisplayLeft();
            delay(500);
        }

        lcd.clear();//���������ͬʱ�ص����Ͻ�
        lcd.print("Arduino");
        lcd.setCursor(0,1);
        lcd.print("Open source");
        delay(2000);
        lcd.clear();//�ٴ�����
    }
}

void loop()
{
    //������setup��ȫ��������ˣ�����loop�в���д����
}