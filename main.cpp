#include <iostream>
#include "Circle.h" 
#include "Rectangle.h"
#include "DrawableShape.h"

int main() {
  Rectangle rectangle(5, '+', '0');
  rectangle.drow();
  Circle circle(11, '+', '0');
  circle.drow();
  circle.setSize(10);
  circle.drow();
}