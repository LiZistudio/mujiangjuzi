#define _CRT_SECURE_NO_WARNINGS 1

/*************************************************
* �ļ�����test.cpp
* �����ˣ�LiZi
* ���ڣ�2021.5.5
* ������C++С��Ŀ������Ů���ɼǡ�
* �޸��ˣ�LiZi
* ���ڣ�
* �汾��v1.0.0
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

using namespace std;

int main()
{
	//1.Ϊ��Ůȡ����
	/** ���׵����� */
	std::string value_father_name;
	/** Ů�������� */
	std::string value_daughter_name;
	/** Ů�����յ��·� */
	int value_birth_month = 0;
	/** Ů�����յ����� */
	int value_birth_date = 0;
	std::string value_daughter_constell;
	/**������ά����*/
	std::string constell_names[12][2] = {
		{"Ħ����","ˮƿ��"}, //һ��
		{"ˮƿ��","˫����"},//���� 
		{"˫����","������"}, //����
		{"������","��ţ��"},//����
		{"��ţ��","˫����"}, //����
		{"˫����","��з��"}, //����
		{"��з��","ʨ����"}, //����
		{"ʨ����","��Ů��"}, //����
		{"��Ů��","�����"}, //����
		{"�����","��Ы��"}, //ʮ��
		{"��Ы��","������"}, //ʮһ��
		{"������","Ħ����"} //ʮ����
	};
	std::cout << "���׵�����:" << std::endl;
	std::cin >> value_father_name;
	std::cout << "Ů����������" << endl;
	std::cin >> value_daughter_name;
	cout << "Ů�������գ�MM DD��";
	cin >> value_birth_month >> value_birth_date;
	/** ���·ݵĿ��������� */
	int constell_dates[] = { 20,19,21,20,21,22,23,23,23,24,23,22 };
	//2.ΪŮ��¼���ʼ��Ϣ ���ա�����...
	/*std::cout << "�������·ݣ�" << std::endl;
	std::cin >> value_birth_month;
	std::cout << "���������ڣ�" << std::endl;
	std::cin>>value_birth_date;*/
	value_daughter_constell = constell_names[value_birth_month - 1][value_birth_date / constell_dates[value_birth_month - 1]];
	//std::cout << '\n'<<value_daughter_constell << std::endl;
	cout << "Ů������Ϣ��"<<endl;
	cout << "������" << value_daughter_name << endl;
	cout << "���գ�1659-" << value_birth_month << "-" << value_birth_date << endl;
	cout << "������" << value_daughter_constell << endl;

	//  ����Ů����������������Ϸ�Ļ�������������������������������...��
	//3.��ʼ��Ϸ��ѭ��
	//4.���ݸ���������ж���Ϸ���
	return 0;
}