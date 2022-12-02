#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//単方向リストの構造体の定義
typedef struct cell {
	char str[8];
	struct cell* next;
}CELL;

void create(CELL* endlist, const char* buf);
void index(CELL* list);

int main() {
	char str[8];
	//先頭のセルを宣言
	CELL head;
	head.next = nullptr;

	while (true) {
		printf("文字を入力してください\n");

		printf("入力した文字：");
		scanf_s("%s", str, 8);

		create(&head, str);

		index(&head);
	}
	return 0;
}

void create(CELL* endlist, const char* buf) {
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));

	assert(newCell);
	strcpy_s(newCell->str, 8, buf);
	newCell->next = nullptr;

	//NewCell->&str = val;

	while (endlist->next != nullptr) {
		endlist = endlist->next;
	}
	endlist->next = newCell;
}

void index(CELL* endlist) {
	printf("{");
	while (endlist->next != nullptr) {
		endlist = endlist->next;
		printf("%s,", endlist->str);
	}
	printf("}\n\n");
}