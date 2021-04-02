#include <iostream>
#include "Rectangle.h"

void Rectangle::drow() override {
  _matrix = new char* [_sizeMatrix];
  for(int i = 0; i < _sizeMatrix; i++) {
    _matrix[i]=new char[_sizeMatrix];
  }
}