#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int);

int main(void) {

	PFunc p;

	int number = 0;
	int second = 3;

	printf("start\n");

	printf("��(�)�Ȃ�[1],��(����)�Ȃ�[0]����͂��Ă�������\n");

	scanf_s("%d", &number);

	std::function<void(PFunc, int)>SetTimeout = [=](PFunc p, int second) {
		printf("����...");

		//�R�[���o�b�N�֐����Ăяo��
		Sleep(second * 1000);

		//mac��Unix�nOS�̏ꍇ
		//sleep(second);
		p(number);
	};

	std::function<void(int)>DiceResult = [&](int number) {
		srand(time(nullptr));
		int dice = rand() % 6 + 1;

		if (dice % 2 == number) {
			printf("������\n");
		}
		else {
			printf("�͂���\n");
		}

		printf("��������̏o�ڂ�%d�ł���\n", dice);
	};

	p = DiceResult;

	SetTimeout(p, second);

	return 0;

}