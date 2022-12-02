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
void deleteCell(CELL* endlist);

int main() {
	char str[8];
	int num = 0;
	//先頭のセルを宣言
	CELL head;
	head.next = nullptr;

	while (true) {

		if (num == 0) {
			printf("[要素の操作]\n");
			printf("1.要素の一覧表示\n");
			printf("2.最後尾に要素の挿入\n");
			printf("3.最後尾の要素の削除\n\n");
			printf("---------------------\n");
			printf("操作を選択してください\n\n");
		}

		scanf_s("%d", &num);

		if (num == 1) {
			printf("要素の一覧");
			index(&head);
			printf("0で初期画面に戻る\n");
		}

		if (num == 2) {
			printf("入力した文字：");
			scanf_s("%s", str, 8);
			printf("\n");
			create(&head, str);
			printf("要素[%s]がリストに挿入されました\n\n", str);
			printf("---------------------\n");
			printf("0で初期画面に戻る\n\n");
		}

		if (num == 3) {
			printf("要素の削除\n");
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