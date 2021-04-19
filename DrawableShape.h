#pragma once
#include <stdlib.h>
#include "Type.h"

class DrawableShape {
protected:
	char _lineSymbol, _backgroundSymbol;
	size_t _sizeMatrix;
	char** _matrix;
	Type _type;
  size_t _lastSize = 0;
  char _lastBackgroundSym;
  char _lastLineSym;
public:
  //DrawableShape() = 0;
	void setSymbol(char);
	void setBackgoundSymbol(char);
	Type getType();
	void drow();
  virtual void fillMatrix() = 0;
	void size(size_t);
	void setSize(size_t);
};