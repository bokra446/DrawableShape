#include "DrawableShape.h"
#include <iostream>
#include <cstring>

void DrawableShape::setSymbol(char sym) {
	_lineSymbol = sym;
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

Type DrawableShape::getType(){
  return _type;
}

void DrawableShape::drow(){
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
      memset(_matrix[i], _backgroundSymbol, sizeof(char) * _sizeMatrix);
    }
    
    fillMatrix();
  }
  if((_backgroundSymbol != _lastBackgroundSym) || (_lineSymbol != _lastLineSym)){
    for (int i = 0; i < _sizeMatrix; ++i){
        memset(_matrix[i], _backgroundSymbol, sizeof(char) * _sizeMatrix);
      }
      fillMatrix();
  }
    _lastSize = _sizeMatrix;
    _lastLineSym = _lineSymbol;
    _lastBackgroundSym = _backgroundSymbol;


  for (int i = 0; i < _sizeMatrix; ++i){
    for (int j = 0; j< _sizeMatrix; ++j){
      std::cout << _matrix[i][j];
    }
    std::cout << std::endl;
  }
}