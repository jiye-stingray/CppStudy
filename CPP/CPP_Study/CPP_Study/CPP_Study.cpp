#include <iostream>
using namespace std;

// 오늘의 주제 : 다중 포인터

void SetNumber(int* a) {
	*a = 1;
}

void SetMessage(const char* a) {
	a = "Bye";
}

void SetMessage(const char** a)
{
	*a = "Bye";
}

void SetMessage2(const char*& a)
{
	a = "Wow";
}

int main()
{
	int a = 0;
	SetNumber(&a);	
	cout << a << endl;

	// .rdata Hello 주소[H][e][l][l][o][\0]
	// msg[Hello주소] << 8바이트
	const char* msg = "Hello";
	SetMessage(msg);
	cout << msg << endl;

	// 주소2 [ ] << 1바이트 
	// 주소1[ Hello주소 ] << 8바이트
	// pp[ &msg ] << 8바이트
	const char** pp = &msg;
	SetMessage(&msg);		
	*pp = "Bye";
	cout << msg << endl;


	// 다중 포인터 : 혼동스럽다? 
	// 그냥 양파까기라고 생각하면 된다
	// 오른쪽에서 왼쪽으로 분석 <-
	SetMessage2(msg);
	cout << msg << endl;

	return 0;
}
