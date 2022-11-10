#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

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

	printf("さいころの出目は%dでした\n", dice);

}

void SetTimeout(PFunc p, int second, int number) {
		printf("結果...");

		//コールバック関数を呼び出す
		Sleep(second * 1000);

		//macやUnix系OSの場合
		//sleep(second);
		p(number);
};

int main(void) {

	PFunc p;

	int number = 0;
	int second = 3;
	p = DiceResult;

	printf("start\n");

	printf("半(奇数)なら[1],丁(偶数)なら[0]を入力してください\n");

	scanf_s("%d", &number);


	SetTimeout(p, second,number);

	return 0;

}