﻿#include <iostream>
using namespace std;

// 오늘의 주제 : 데이터 연산
// 데이터를 가공하는 방법에 대해서 알아봅시다 

// a [ 1 ] 
// a라는 이름의 바구니를 할당하고 안에 1을 넣는다
int a = 1;

// b [ 2 ]
// b라는 이름의 바구니를 할당하고 안에 2를 넣는다
int b = 2;

int main()
{
#pragma region 산술 연산
	// 산술 연산자

	// a에 b를 대입하고 b를 반환하라
	// -> b라는 바구니 안에 있는 값을 , a라는 바구니 안에다 복사한다

	// 대입 연산
	a = b;

	// 사칙 연산
	// 언제 필요한가?
	// ex) 데미지 계산
	// ex) 체력을 깎는다거나
	// ex) 루프문에서 카운터를 1 증가시킨다거나 
	
	a = b + 3;	// 덧셈 add
	a = b - 3;	// 뺄셈 sub
	a = b * 3;	// 곱셈 mul
	a = b / 3;	// 나눗셈 div
	a = b % 3;	// 나머지 div

	a += 3;		// a = a + 3;
	a -= 3;
	a *= 3;
	a /= 3;
	a %= 3;

	// 증감 연산자
	a = a + 1;	// add eax, 1 -> inc eax
	a++;
	++a;
	a--;
	--a;

	b = a++;	// b = a -> a를 1 증가
	b = ++a;	// a를 1 증가 -> b = a


	b = (a + 1) * 3;



#pragma endregion 

	
}
