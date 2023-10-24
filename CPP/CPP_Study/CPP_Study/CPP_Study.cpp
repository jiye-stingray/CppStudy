#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터

void SetHP(int* hp)
{
	*hp = 100;
}

int main()
{
	int	hp = 1;
	SetHP(&hp);

	// TYPE* 변수이름 
	// 일단 2가지 요소
	// - TYPE
	// - *

	int number = 1;

	// 바구니는 바구니
	// [주소를 저장하는 바구니]
	// 변수를 선언할 때 * 등장했다 -> 포인터 = 주소
	// ex) 포인터라는 바구니는 4바이트(32비트) or 8바이트(64비트) 고정크기
	int* ptr = &number;

	// 주소를 저장하는 바구니 가 가르키는 주소로 가서 무엇을 해라
	// *변수이름 = 값
	// - 변수 선언 (주소를 저장하는 바구니다)
	// - 사용할 때 (포탈 타고 순간이동)

	int value = *ptr;
	*ptr = 2;

	// * = 포인터의 의미 = 주소를 저장하는 바구니

	// 주소에 가면 뭐가 있는데?
	// * = 포인터 (주소 담는 바구니)

	// 타입의 불일치
	__int64* ptr2 = (__int64*) & number;

	*ptr2 = 0xAABBCCDDEEFF;

	return 0;
}
