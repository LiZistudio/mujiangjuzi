#define _CRT_SECURE_NO_WARNINGS 1

/*************************************************
* 文件名：test.cpp
* 创建人：LiZi
* 日期：2021.5.5
* 描述：C++小项目《美少女养成记》
* 修改人：LiZi
* 日期：
* 版本：v1.0.0
**************************************************/


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

#include<iostream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <array>

//using namespace std;

int main()
{
	//1.为父女取名字
	/** 父亲的姓名 */
	std::string value_father_name;
	/** 女儿的姓名 */
	std::string value_daughter_name;
	/** 女儿生日的月份 */
	int value_birth_month = 1;
	/** 女儿生日的日期 */
	int value_birth_date = 1;
	std::string value_daughter_constell;
	/**星座二维数组*/
	std::string constell_names[12][2] = {
		{"摩羯座","水瓶座"}, //一月
		{"水瓶座","双鱼座"},//二月 
		{"双鱼座","白羊座"}, //三月
		{"白羊座","金牛座"},//四月
		{"金牛座","双子座"}, //五月
		{"双子座","巨蟹座"}, //六月
		{"巨蟹座","狮子座"}, //七月
		{"狮子座","处女座"}, //八月
		{"处女座","天秤座"}, //九月
		{"天秤座","天蝎座"}, //十月
		{"天蝎座","射手座"}, //十一月
		{"射手座","摩羯座"} //十二月
	};
	/** 各月份的跨星座日期 */
	int constell_dates[] = { 20,19,21,20,21,22,23,23,23,24,23,22 };
	//2.为女儿录入初始信息 生日、星座...
	value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
	std::cout << value_daughter_constell << std::endl;
	//  根据女儿的星座，设置游戏的基本参数（体力、智力、魅力、道德...）
	//3.开始游戏大循环
	//4.根据各项参数，判定游戏结果
	
	return 0;
}