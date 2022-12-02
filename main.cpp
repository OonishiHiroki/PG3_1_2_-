#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//’P•ûŒüƒŠƒXƒg‚Ì\‘¢‘Ì‚Ì’è‹`
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
	//æ“ª‚ÌƒZƒ‹‚ðéŒ¾
	CELL head;
	head.next = nullptr;

	while (true) {

		if (num == 0) {
			printf("[—v‘f‚Ì‘€ì]\n");
			printf("1.—v‘f‚Ìˆê——•\Ž¦\n");
			printf("2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n");
			printf("3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n\n");
			printf("---------------------\n");
			printf("‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n\n");
		}

		scanf_s("%d", &num);

		if (num == 1) {
			printf("—v‘f‚Ìˆê——");
			index(&head);
			printf("0‚Å‰Šú‰æ–Ê‚É–ß‚é\n");
		}

		if (num == 2) {
			printf("“ü—Í‚µ‚½•¶ŽšF");
			scanf_s("%s", str, 8);
			printf("\n");
			create(&head, str);
			printf("—v‘f[%s]‚ªƒŠƒXƒg‚É‘}“ü‚³‚ê‚Ü‚µ‚½\n\n", str);
			printf("---------------------\n");
			printf("0‚Å‰Šú‰æ–Ê‚É–ß‚é\n\n");
		}

		if (num == 3) {
			printf("—v‘f‚Ìíœ\n");
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