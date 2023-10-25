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

// 특정 조건을 만족하는 몬스터를 찾는 함수
StatInfo* FindMonster()
{
	// TODO : Heap 영역에서 뭔가를 찾아봄 
	// 찾았다!
	// return monster~;
}

StatInfo globalInfo;

void PrintInfoByPtr(const StatInfo* const info)
{
	if (info == nullptr)
		return;

	cout << "--------------------" << endl;
	cout << "HP: " << info->hp << endl;
	cout << "ATTCK: " << info->attack << endl;
	cout << "DEFENCE: " << info->defence << endl;
	cout << "--------------------" << endl;

	// 별 뒤에 붙인다면? 
	// StatInfo* const info
	// info 라는 바구니의 내용물(주소)를 바꿀 수 없음

	// 별 앞에 붙인다면 ?
	// const StatInfo* info
	// info가 가리키고 있는 바구니의 내용을 바꿀 수 없음


	// info[ 주소값 ]		주소값[	데이터	]
	//info = &globalInfo;

	//info->hp = 10000;
}


void PrintInfoByRef(const StatInfo& info)
{
	cout << "--------------------" << endl;
	cout << "HP: " << info.hp << endl;
	cout << "ATTCK: " << info.attack << endl;
	cout << "DEFENCE: " << info.defence << endl;
	cout << "--------------------" << endl;

}

#define OUT

void ChangeInfo(OUT StatInfo& info)
{
	info.hp = 100;
}

int main()
{

	StatInfo info;

	// 포인터 vs 참조

	// 성능 : 똑같음
	// 편의성 : 참조가 좋다

	// 어셈블리로 보면 포인터랑 똑같음
	int number = 1;
	int& reference = number;


	// 2) 초기화 관련 
	// 참조하는 대상이 없으면 안됨

	StatInfo* pointer = nullptr;

	CreateMonster(&info);

	PrintInfoByPtr(&info);
	PrintInfoByRef(info);

	// 그래서 결론은 ? 
	// Team by Team

	// 명시적으로 호출할 때 OUT을 붙일 수 있음
	ChangeInfo(OUT info);


	// 포인터로 사용하던 걸 참조로 넘겨주면 ?
	PrintInfoByRef(*pointer);

	// 참조로 사용하던걸 포인터로 사용하면 ?
	PrintInfoByPtr(pointer);

	return 0;
}
