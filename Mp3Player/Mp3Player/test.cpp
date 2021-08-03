#include"AudioClip.h"
using namespace std;
/*AudioClip ac;
	ac.load("H:\\CloudMusic\\zhoujielun_woniu.wav");
	ac.play();
	system("pause");*/
void mainMenu() {
	cout << "\n☆*: .. o(≧▽≦)o ..:*☆欢迎使用栗子播放器（LiziPlayer）！☆*: .. o(≧▽≦)o ..:*☆\n"
		<< "***********************************************\n"
		<< "*****************1.选择并播放歌曲**************\n"
		<< "*****************0.退出播放器******************\n"
		<< "***********************************************\n"
		<< endl;
}
void soundMenu() {
	cout << "\n☆*: .. o(≧▽≦)o ..:*☆欢迎使用栗子播放器（LiziPlayer）！☆*: .. o(≧▽≦)o ..:*☆\n"
		<< "\n请选择你要播放的歌曲(输入序号即可)>>:\n"
		<< "***********************************************\n"
		<< "*****************1.青花瓷——周杰伦*************\n"
		<< "*****************2.蜗  牛——周杰伦*************\n"
		<< "*****************3.春  梦——许冠杰*************\n"
		<< "*****************4.千里之外——周杰伦、费玉清***\n"
		<< "*****************5.夜曲——周杰伦***************\n"
		<< "*****************6.mojito——周杰伦*************\n"
		<< "*****************7.菊花台——周杰伦*************\n"
		<< "*****************0.推出当前播放*****************\n"
		<< "***********************************************\n"
		<< endl;
}
int main()
{
	int input1 = 0;
	do
	{
		mainMenu();
		cout << "请输入:>\n";
		cin >> input1;
		if (input1 == 1) {
			int input2 = 0;
			do
			{
				soundMenu();
				AudioClip ac;
				cout << "请输入:>\n";
				cin >> input2;
				switch (input2)
				{
				case 1:
					ac.load("H:\\CloudMusic\\qinghuachina.mp3");
					ac.play();
					system("pause");
					break;
				case 2:
					ac.load("H:\\CloudMusic\\zhoujielun_woniu.wav");
					ac.play();
					system("pause");

					break;
				case 3:
					ac.load("H:\\CloudMusic\\xuguanjie_chunmeng.wav");
					ac.play();
					system("pause");

					break;
				case 4:
					ac.load("H:\\CloudMusic\\qianlizhiwai.mp3");
					ac.play();
					system("pause");

					break;
				case 5:
					ac.load("H:\\CloudMusic\\nightsound.mp3");
					ac.play();
					system("pause");

					break;
				case 6:
					ac.load("H:\\CloudMusic\\mojito.mp3");
					ac.play();
					system("pause");

					break;
				case 7:
					ac.load("H:\\CloudMusic\\juhuatai.mp3");
					ac.play();
					system("pause");

					break;
				case 0:
					cout << "退出当前播放" << endl;
					break;
				default:
					cout << "输入错误，请重新输入！" << endl;
					break;
				}
			} while (input2);
		}
		else if(input1==0)
		{
			cout << "退出播放器~" << endl;
		}
	} while (input1);
	return 0;
}