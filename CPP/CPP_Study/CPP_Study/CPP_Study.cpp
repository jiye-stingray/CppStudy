#include <iostream>
using namespace std;

// 오늘의 주제 : 함수 (프로시저, 메소드, 루틴)

/*

	input으로 무엇을 받고, output으로 무엇을 뱉을지 정해준다

	반환타입 함수이름([인자타입 매개변수])
	{
		함수 내용
		return ~~~;
	}

*/

void PrintHelloWorld()
{
	cout << "Hello World" << endl; 

	return;
}

// 정수를 입력 받아서, 콘솔에 출력하는 함수를 만들어보자
// input : int // output : 없음
void PrintNumber(int number)
{
	cout << "넘겨주신  숫자는 " << number << " 입니다" << endl;
}

// 2를 곱하고 결과물을 뱉는 함수
int MultiplyBy2(int a)
{
	return a * 2;
}

// 두 숫자를 곱해서 결과물을 뱉는 함수를 만들어보자

int MultiplyBy(int a, int b)
{
	int c = a * b;
	return c;
}

// F5
// F10
// F11
int main()
{

	int a = 3;
	int b = 5;
	int result = MultiplyBy(a,b);

	PrintNumber(result);
	//PrintHelloWorld();

	return 0;
}
