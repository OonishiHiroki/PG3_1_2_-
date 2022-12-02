#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//�P�������X�g�̍\���̂̒�`
typedef struct cell {
	char str[8];
	struct cell* next;
}CELL;

void create(CELL* endlist, const char* buf);
void index(CELL* list);
void deleteCell(CELL* endlist);

int main() {
	char str[8];
	int num = 0;
	//�擪�̃Z����錾
	CELL head;
	head.next = nullptr;

	while (true) {

		if (num == 0) {
			printf("[�v�f�̑���]\n");
			printf("1.�v�f�̈ꗗ�\��\n");
			printf("2.�Ō���ɗv�f�̑}��\n");
			printf("3.�Ō���̗v�f�̍폜\n\n");
			printf("---------------------\n");
			printf("�����I�����Ă�������\n\n");
		}

		scanf_s("%d", &num);

		if (num == 1) {
			printf("�v�f�̈ꗗ");
			index(&head);
			printf("0�ŏ�����ʂɖ߂�\n");
		}

		if (num == 2) {
			printf("���͂��������F");
			scanf_s("%s", str, 8);
			printf("\n");
			create(&head, str);
			printf("�v�f[%s]�����X�g�ɑ}������܂���\n\n", str);
			printf("---------------------\n");
			printf("0�ŏ�����ʂɖ߂�\n\n");
		}

		if (num == 3) {
			printf("�v�f�̍폜\n");
			printf("------------------\n");
			deleteCell(&head);
		}

	}
	return 0;
}

void create(CELL* endlist, const char* buf) {
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));

	assert(newCell);
	strcpy_s(newCell->str, 8, buf);
	newCell->next = nullptr;

	while (endlist->next != nullptr) {
		endlist = endlist->next;
	}
	endlist->next = newCell;
}

void index(CELL* endlist) {
	int num = -1;
	printf("{");
	while (endlist->next != nullptr) {
		num++;
		endlist = endlist->next;
		printf("\n%d:%s,",num,endlist->str);
	}
	printf("\n}\n\n");
}

void deleteCell(CELL* endlist) {
	CELL* list;
	list = endlist->next;
	if (endlist->next != nullptr) {
		list->next = nullptr;
	}
}