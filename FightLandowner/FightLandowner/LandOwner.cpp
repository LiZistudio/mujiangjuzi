#include "LandOwner.h"
LandOwner::LandOwner(){
	SetNickName("Ĭ�ϵ���");
	SetSex("����");
	SetGold(0);
	SetExp(1000);
	
}

LandOwner::~LandOwner(){
	cout << GetNickName();

	cout << "���ͷ�" << endl;
}

LandOwner::LandOwner(string) {

}

LandOwner::LandOwner(string, string, int, long) {

}

void LandOwner::ShowInfo() {
	cout << GetNickName()<<endl;
	cout << GetSex()<<endl;
	cout << GetGold()<<endl;
	cout << GetExp()<<endl;
}

