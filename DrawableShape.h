#pragma once
#include <stdlib.h>

class DrawableShape {
protected:
	char _linesymbol, _backgroundSymbol;
	size_t _sizeMatrix;
	char** _matrix;
	//
	enum class Type{
		Rectangle,
    Circle
	};
public:
	void setSymbol(char);
	void setBackgoundSymbol(char);
	Type getType(Type Shape);
	virtual void drow() = 0;
	void size(size_t);
	void setSize(size_t);
};