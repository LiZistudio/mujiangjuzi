#include "LandOwner.h"
LandOwner::LandOwner(){
	SetNickName("默认地主");
	SetSex("保密");
	SetGold(0);
	SetExp(1000);
	
}

LandOwner::~LandOwner(){
	cout << GetNickName();

	cout << "被释放" << endl;
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

