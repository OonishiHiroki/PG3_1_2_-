#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <stdio.h>
using namespace std;

int main() {
	IShape* Ishape[2];

	Ishape[0] = new Circle;
	Ishape[1] = new Rectangle;

	Ishape[0]->Size();
	Ishape[0]->Draw();

	Ishape[1]->Size();
	Ishape[1]->Draw();

	delete Ishape[0];
	delete Ishape[1];

	return 0;
}