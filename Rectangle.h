#pragma once
#include "DrawableShape.h"
class Rectangle : public DrawableShape{
public:
  Rectangle(size_t, char, char);
	void drow() override;
private:
  size_t _lastSize = 0;
  char _lastBackgroundSym;
  char _lastLineSym;
};