#include <stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct cell {
	int val;
	struct cell* next;
}CELL;

void create(CELL* list, int val);
void index(CELL* list);

int main() {
	int val;
	//�擪�̃Z����錾
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("��������͂��Ă�������\n");

		printf("���͂��������F");
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);
	}
	return 0;
}

void create(CELL* list, int val) {
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));

	assert(newCell);
	newCell->val = val;
	newCell->next = nullptr;

	while (list->next != nullptr) {
		list = list->next;
	}
	list->next = newCell;
}

void index(CELL* list) {
	printf("{");
	while (list->next != nullptr) {
		list = list->next;
		printf("%d,", list->val);
	}
	printf("}\n\n");
}
