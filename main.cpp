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
		printf("������\n");
	}
	else {
		printf("�͂���\n");
	}
	printf("�T�C�R���̏o�ڂ�%d�ł���\n", dice);
};

int main(void) {

	PFunc p;

	int number = 0;
	int second = 3;

	printf("start\n");

	printf("��(�)�Ȃ�[1],��(����)�Ȃ�[0]����͂��Ă�������\n");

	scanf_s("%d", &number);

	std::function<void(PFunc, int)>SetTimeout = [=](PFunc p, int second) {

		//�R�[���o�b�N�֐����Ăяo��
		Sleep(second * 1000);

		//mac��Unix�nOS�̏ꍇ
		//sleep(second);
		p(number);
	};

	p = DiceResult;

	SetTimeout(p, second);

	system("pause");

	return 0;
}