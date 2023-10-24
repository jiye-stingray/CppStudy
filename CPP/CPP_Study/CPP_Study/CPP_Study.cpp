#include <iostream>
using namespace std;

// 오늘의 주제 : 함수 마무리

// 오버로딩 (중복 정의 : 함수 이름의 재사용)
// - 매개변수 갯수가 다르거나 
// - 매개변수 타입이 다르거나 (순서가 다른 걸 포함)
int Add(int a, int b)
{
	int result = a + b;
	return result;
}

float Add(float a, float b)
{
	float result = a + b;
	return result;
}

// 기본 인자값
void SetPlayerInfo(int hp, int mp, int attack, int quildld = 1,	int	castled = 2)
{

}

// 스택 오버플로우

int Factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * Factorial(n - 1);
}

int main()
{
	int result = Factorial(5);
	cout << result << endl;

	SetPlayerInfo(100, 40, 10, 0 , 1);

	// 5! = 5*4*3*2*1

	return 0;
}
