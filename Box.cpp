#include "Box.h"

// Implement setters and getters
void Box::setlength (int len)
{
  length = len;
}

void Box::setwidth (int wid)
{
  width = wid;
}

void Box::setheigth (int heig)
{
  height = heig;
}

int Box::getLength ()
{
  return length;
}

int Box::getWidth ()
{
  return width;
}

int Box::getHeight ()
{
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume()
{
  return length * width * height;
}
