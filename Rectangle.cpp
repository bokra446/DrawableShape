#include <iostream>
#include "Rectangle.h"
#include <cstring>
#include <iostream>

Rectangle::Rectangle(size_t size, char backgroundSym, char lineSym){
  _sizeMatrix = size;
  _backgroundSymbol = backgroundSym;
  _linesymbol = lineSym;
  _type = Type::Rectangle;
}

void Rectangle::drow() {
  if (_lastSize != _sizeMatrix){
    if (_lastSize != 0) {
      for (int i = 0; i < _sizeMatrix; ++i){
        delete [] _matrix[i];
      }
      delete [] _matrix;
    }

    _matrix = new char* [_sizeMatrix];
    for(int i = 0; i < _sizeMatrix; ++i) {
      _matrix[i] = new char[_sizeMatrix];
    }

    for (int i = 0; i < _sizeMatrix; ++i){
      memset(_matrix[i], _backgroundSymbol, sizeof(char) * _sizeMatrix);
    }
    for (int i = 0; i < _sizeMatrix; ++i){
      _matrix[0][i] = _linesymbol;
      _matrix[_sizeMatrix - 1][i] = _linesymbol;
      _matrix[i][0] = _linesymbol;
      _matrix[i][_sizeMatrix - 1] = _linesymbol;
    }
    _lastSize = _sizeMatrix;
  }

  for (int i = 0; i < _sizeMatrix; ++i){
    for (int j = 0; j< _sizeMatrix; ++j){
      std::cout << _matrix[i][j];
    }
    std::cout << std::endl;
  }
}