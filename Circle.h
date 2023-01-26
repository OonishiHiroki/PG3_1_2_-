#pragma once
#include "IShape.h"
class Circle : public IShape {
public:
	void Size() override;

	void Draw() override;
private:
	float PI = 3.1415;

	float radius = 5;

	float area = 0;

};

