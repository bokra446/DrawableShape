#include "DrawableShape.h"

void DrawableShape::setSymbol(char sym) {
	_linesymbol = sym;
}
void DrawableShape::setBackgoundSymbol(char sym) {
	_backgroundSymbol = sym;
}

void DrawableShape::size(size_t length) {
	_sizeMatrix = length;
}

void DrawableShape::setSize(size_t length) {
	size(length);
}