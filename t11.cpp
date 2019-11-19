#include <iostream>
#include <math.h>
using namespace std;
class Dot
{
private:
  double x, y;

public:
  Dot() { this->x = this->y = 0; }
  Dot(double x, double y)
  {
    this->x = x;
    this->y = y;
  }
  Dot(const Dot &obj)
  {
    this->x = obj.x;
    this->y = obj.y;
  }
  double awayOf(Dot &obj) { return sqrt(pow(obj.x - this->x, 2) + pow(obj.y - this->y, 2)); }
  void add(Dot &obj)
  {
    this->x += obj.x;
    this->y += obj.y;
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
  Dot operator=(Dot obj)
  {
    this->x = obj.x;
    this->y = obj.y;
    return *this;
  }
  friend Dot operator+(Dot &obj, Dot &obj2) { return Dot(obj.x + obj2.x, obj.y + obj2.y); }
  friend Dot operator-(Dot &obj, Dot &obj2) { return Dot(obj.x - obj2.x, obj.y - obj2.y); }
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
  Dot a, b(12, 32), c;
  a.input();
  c = a + b;
  cout << "isEqual: " << a.isEqual(b) << endl
       << "distance: " << c.awayOf(b) << endl
       << "c = " << endl;
  c.print();
  system("pause");
  return 0;
}
