#include <iostream>
using namespace std;

// 이렇게 주석을 달 수 있어요!
// Ctrl+K+C(Comment) Ctrl+K+U(UnComment) 단축키

/*
주석이 여러 줄이라면 이렇게 달 수 있어요!
*/

// 프로그래밍을 단순하게 생각하면 
// 적절한 데이터를 저장하고 가공하는 것
// 데이터 + 로직

// 그 중에서도 가장 빈번하게 사용되는 정수에 대해서 알아봅시다.

// 변수 선언 방법
// [타입] [이름];
// [타입] [이름] = [초기값];

//0이 아닌 초기화 값이 있으면 .data 영역
int hp = 100;

char a;     // 1바이트 (-128~127)
short b;    // 2바이트 (-32768~32767)
int c;      // 4바이트 (-21.4억 ~ 21.4억)
__int64 d;  // 8바이트(long long) (어마어마하게 크다)

unsigned char a;     // 1바이트 (0 ~ 225)
unsigned short b;    // 2바이트 (0 ~ 65536)
unsigned int c;      // 4바이트 (0 ~ 42.9억)
unsigned __int64 d;  // 8바이트(long long) (0 ~ 어마어마하게 크다)

// 초기값이 0이거나, 초기값이 없는 변수라면 .bss 영역


int main()
{
    cout << "체력이 " << hp << " 남았습니다" << endl;
}