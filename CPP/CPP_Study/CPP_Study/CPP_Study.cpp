#include <iostream>
using namespace std;

// 오늘의 주제 : 불리언(bool)과 실수

// 불리언(boolean) 참/거짓
bool isHignLevel = true;
bool isPlayer = true;
bool isMale = false;

// [Note]
// 사실 bool은 그냥 1바이트  정수에 불과
// 왜 정수 시간에 안 다뤘을까 ?
// -> 일리 있음 어셈블리에서 bool이라는 것은 없음
// bool만 봐도 참/거짓 둘 중 하나라는 힌트를 줍니다. (가독성)
int isFemale = 1;

// bool < 1바이트 정수


int main()
{
	cout << isHignLevel << endl;
	// 여성 갯수? 뭔 말이지?

}
