#include <iostream>
using namespace std;

// 오늘의 주제 : 참조

struct StatInfo
{
	int hp;
	int attack;
	int defence;
};

void CreateMonster(StatInfo* info)
{
	info->hp = 100;
	info->attack = 8;
	info->defence = 5;
}

void CreateMonster(StatInfo info)
{
	info.hp = 100;
	info.attack = 8;
	info.defence = 5;
}

// 값을 수정하지 않는다면, 양쪽 다 일단 문제 없음

// 1) 값 전달 방식 
void PrintInfoBycopy(StatInfo info)
{
	cout << "--------------------" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATTCK: " << info.attack << endl;
	cout << "DEFENCE: " << info.defence << endl;
	cout << "--------------------" << endl;
}

// 2) 주소 전달 방식 
void PrintInfoByPtr(StatInfo* info)
{
	cout << "--------------------" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "ATTCK: " << info->attack << endl;
	cout << "DEFENCE: " << info->defence << endl;
	cout << "--------------------" << endl;
}

// StatInfo가 1000 바이트짜리 대형 구조체라면 ? 

// 3) 참조 전달 방식
void PrintInfoByRef(StatInfo& info)
{
	cout << "--------------------" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATTCK: " << info.attack << endl;
	cout << "DEFENCE: " << info.defence << endl;
	cout << "--------------------" << endl;
}


int main()
{

	int number = 1;

	int* pointer = &number;
	*pointer = 2;

	// 어셈블리로 보면 포인터랑 똑같음
	int& reference = number;

	// number라는 바구니에 reference라는 이름을 또 지어주는 것
	reference = 3;

	// 그런데 귀찮게 또 다른 이름을 짓는 이유는 ?

	StatInfo info;
	CreateMonster(&info);


	PrintInfoBycopy(info);
	PrintInfoByPtr(&info);
	PrintInfoByRef(info);
	return 0;
}
