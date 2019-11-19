#include <iostream>
#include <math.h>

using namespace std;

// Базовий клас (точки у двовимірній площині з цілочисельними координатами):
// Конструктори: за замовчуванням, з параметрами та копіювання.
// Деструктор. Функції: обчислення відстані між точками;
// додавання координат двох точок; введення - виведення на екран; перевірка збіжності двох точок.
// Похідний клас: пікселів на екрані (точки, які мають колір).

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
  Dot(Dot &obj)
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
  Dot operator=(Dot &obj)
  {
    this->x = obj.x;
    this->y = obj.y;
  }
  friend Dot &operator+(Dot &obj, Dot &obj2) { return new Dot(obj.x + obj2.x, obj.y + obj2.y) }
  friend Dot &operator-(Dot &obj, Dot &obj2) { return new Dot(obj.x - obj2.x, obj.y - obj2.y) }
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
  getchar();
  return 0;
}
