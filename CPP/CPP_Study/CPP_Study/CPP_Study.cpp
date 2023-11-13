#include <iostream>
using namespace std;

// 오늘의 주제 : 다차원 배열

int main()
{
	int apart[2][5] = { {4,2,1,3,4},{1,1,5,2,2} };

	for (int floor = 0; floor < 2; floor++)
	{
		for (int room = 0; room < 5; room++)
		{
			int num = apart[floor][room];
			cout << num << endl;
		}
	}

	return 0;
}
