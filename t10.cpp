#include <iostream>
#include <math.h>
using namespace std;
class Dot
{
private:
  int x, y;

public:
  Dot() { this->x = this->y = 0; }
  Dot(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  Dot(Dot &obj)
  {
    this->x = obj.x;
    this->y = obj.y;
  }
  int awayOf(Dot &obj) { return sqrt(pow(obj.x - this->x, 2) + pow(obj.y - this->y, 2)); }
  Dot add(Dot &obj)
  {
    this->x += obj.x;
    this->y += obj.y;
    return *this;
  }
  void input()
  {
    cout << "x = ";
    cin >> this->x;
    cout << "y = ";
    cin >> this->y;
  }
  void print() { cout << "x = " << this->x << ", y = " << this->y << endl; }
  bool isEqual(Dot &obj) { return this->x == obj.x && this->y == obj.y; }
};

class ColoredDot : public Dot
{
private:
  unsigned int color;

public:
  unsigned int getColor() { return this->color; }
  void setColor(unsigned int color) { this->color = color; }
};

int main()
{
  Dot a, b(12, 32);
  a.input();
  cout << "isEqual: " << a.isEqual(b) << endl;
  cout << "distance: " << a.add(b).awayOf(b) << endl
       << "a = " << endl;
  a.print();
  system("pause");
  return 0;
}
