#pragma once
#include "DrawableShape.h"
class Rectangle : public DrawableShape{
public:
  Rectangle(size_t, char, char);
	void fillMatrix() override;
};