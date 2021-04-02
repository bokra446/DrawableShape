#pragma once
#include <stdlib.h>
#include "Type.h"

class DrawableShape {
protected:
	char _lineSymbol, _backgroundSymbol;
	size_t _sizeMatrix;
	char** _matrix;
	Type _type;
public:
  //DrawableShape() = 0;
	void setSymbol(char);
	void setBackgoundSymbol(char);
	Type getType();
	virtual void drow() = 0;
	void size(size_t);
	void setSize(size_t);
};