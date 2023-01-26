#include "Rectangle.h"
#include <stdio.h>
void Rectangle::Size() {
	size = vertical * horizontal;
}

void Rectangle::Draw() {
	printf("‹éŒ`‚Ì–ÊÏ:%f\n", size);
}
