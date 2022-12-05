#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int);

void DiceResult(int number) {
	srand(time(nullptr));
	int dice = rand() % 6 + 1;

	if (dice % 2 == number) {
		printf("当たり\n");
	}
	else {
		printf("はずれ\n");
	}
	printf("サイコロの出目は%dでした\n", dice);
};

int main(void) {

	PFunc p;

	int number = 0;
	int second = 3;

	printf("start\n");

	printf("半(奇数)なら[1],丁(偶数)なら[0]を入力してください\n");

	scanf_s("%d", &number);

	std::function<void(PFunc, int)>SetTimeout = [=](PFunc p, int second) {

		//コールバック関数を呼び出す
		Sleep(second * 1000);

		//macやUnix系OSの場合
		//sleep(second);
		p(number);
	};

	p = DiceResult;

	SetTimeout(p, second);

	system("pause");

	return 0;
}