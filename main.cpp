#include <iostream>
#include "Circle.h" 
#include "Rectangle.h"
#include "DrawableShape.h"

int main() {
  Rectangle rectangle(40, '+', '0');
  //rectangle.drow();
  Circle circle(70, '+', '0');
  circle.drow();
}