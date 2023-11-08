#include <iostream>
using namespace std;

// 오늘의 주제 : 포인터 vs 배열

void Test(int a)
{
	a++;
}

// 배열은 함수 인자로 넘기면 컴파일러가 알아서 포인터로 치환한다
void Test(char a[])
{
	a[0] = 'x';
}

int main()
{
	// 8바이트
	const char* test1 = "Hello World";

	char test2[] = "Hello World";
 

	// 포인터는 주소를 담는 바구니
	// 배열은 바구니 모음. 배열 이름은 바구니 모음의 시작 주소

	// 배열을 함수의 인자로 넘긴다면 ?
	
	int a = 0;
	Test(a);
	cout << a << endl;

	// -> 바뀐다 
	// 배열의 시작 주소만 넘긴다
	Test(test2);
	cout << test2 << endl;

	return 0;
}
