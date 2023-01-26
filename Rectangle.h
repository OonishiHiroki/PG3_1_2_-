#pragma once
#include "IShape.h"
class Rectangle : public IShape {
public:
	void Size() override;

	void Draw() override;
private:
	float vertical = 4.5;

	float horizontal = 5.0f;

	float size = 0.0f;
};

