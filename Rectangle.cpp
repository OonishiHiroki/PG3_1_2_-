#include "Rectangle.h"
#include <stdio.h>
void Rectangle::Size() {
	size = vertical * horizontal;
}

void Rectangle::Draw() {
	printf("��`�̖ʐ�:%f\n", size);
}
