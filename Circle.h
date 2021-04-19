#pragma once
#include "DrawableShape.h"
class Circle : public DrawableShape{
public:
  Circle(size_t, char, char);
	void fillMatrix() override;
};