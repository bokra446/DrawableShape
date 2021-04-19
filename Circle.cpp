#include <iostream>
#include "Circle.h"
#include <cstring>
#include <iostream>
#include <cmath>

Circle::Circle(size_t size, char backgroundSym, char lineSym){
  _sizeMatrix = size;
  _backgroundSymbol = backgroundSym;
  _lineSymbol = lineSym;
  _type = Type::Circle;
}

/*void Circle::drow(){
  if ((_lastSize != _sizeMatrix) || (_lastBackgroundSym != _backgroundSymbol) || (_lastLineSym != _lineSymbol)){
    if (_lastSize != 0) {
      for (int i = 0; i < _sizeMatrix; ++i){
        delete [] _matrix[i];
      }
      delete [] _matrix;
    }
    size_t radius;
    if (_sizeMatrix % 2 == 0){
      radius = _sizeMatrix / 2;
    }
    else{
      radius = _sizeMatrix / 2 + 1;
    }
    
    int coordinate;
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

      for (int i = 0; i <= _sizeMatrix / 4 + 1 * (_sizeMatrix / 10) ; ++i){
        coordinate = trunc(sqrt(radius * radius - i * i + 1));
        
        //4-aя четверть
        _matrix[i + radius - 1][coordinate + radius - 1 - 1 * (_sizeMatrix % 2)] = _lineSymbol;
        _matrix[coordinate + radius - 1 - 1 * (_sizeMatrix % 2)][i + radius - 1] = _lineSymbol;

        //2 viertel
        _matrix[_sizeMatrix - radius - i][radius - coordinate] = _lineSymbol;
        _matrix[radius - coordinate][_sizeMatrix - radius - i] = _lineSymbol;

        //3 viertel
        _matrix[i + radius - 1][radius - coordinate] = _lineSymbol;
        _matrix[coordinate + radius - 1 - 1 * (_sizeMatrix % 2)][_sizeMatrix - radius - i] = _lineSymbol;

        //1 viertel
        _matrix[_sizeMatrix - radius - i][coordinate + radius - 1 - 1 * (_sizeMatrix % 2)] = _lineSymbol;
      _matrix[radius - coordinate][i + radius - 1] = _lineSymbol;

      }
    }
    for (int i = 0; i < _sizeMatrix; ++i){
      for (int j = 0; j < _sizeMatrix; ++j){
        std::cout << _matrix[i][j];
      }
      std::cout << std::endl;
    }
  }
}*/
void Circle::fillMatrix(){
  size_t radius;
  if (_sizeMatrix % 2 == 0){
    radius = _sizeMatrix / 2;
  }
  else{
   radius = _sizeMatrix / 2 + 1;
  }
  int coordinate;
  for (int i = 0; i <= _sizeMatrix / 4 + 1 * (_sizeMatrix / 10) ; ++i){
    coordinate = trunc(sqrt(radius * radius - i * i + 1));
        
    //4-aя четверть
    _matrix[i + radius - 1][coordinate + radius - 1 - 1 * (_sizeMatrix % 2)] = _lineSymbol;
    _matrix[coordinate + radius - 1 - 1 * (_sizeMatrix % 2)][i + radius - 1] = _lineSymbol;

    //2 viertel
    _matrix[_sizeMatrix - radius - i][radius - coordinate] = _lineSymbol;
    _matrix[radius - coordinate][_sizeMatrix - radius - i] = _lineSymbol;

    //3 viertel
    _matrix[i + radius - 1][radius - coordinate] = _lineSymbol;
    _matrix[coordinate + radius - 1 - 1 * (_sizeMatrix % 2)][_sizeMatrix - radius - i] = _lineSymbol;

    //1 viertel
    _matrix[_sizeMatrix - radius - i][coordinate + radius - 1 - 1 * (_sizeMatrix % 2)] = _lineSymbol;
    _matrix[radius - coordinate][i + radius - 1] = _lineSymbol;
  }
}