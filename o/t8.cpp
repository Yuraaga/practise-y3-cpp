#include <iostream>

using namespace std;

// Взявши за основу приведену програму, додайте перевизначення операції
// присвоєння і перевизначений конструктор копіювання до класу Array. Потім
// додайте до main() вираз Array arr2(arr1); і arr3=arr1; для перевірки того, що
// перевизначені операції працюють. Конструктор копіювання повинен створити
// новий об'єкт Array зі своїм власним місцем у пам'яті, виділеним для зберігання
// елементів масиву. І конструктор копіювання, і оператор присвоювання повинні
// копіювати вміст старого об'єктів та класу Array в новий.

class Array // моделює звичайний масив C++
{
private:
  int *ptr; // Покажчик на вміст Array
  int size; // Розмір Array
public:
  Array(int s) // конструктор з одним аргументом
  {
    size = s;         // Аргумент - розмір Array
    ptr = new int[s]; // Виділити пам'ять під Array
  }
  Array(Array &obj)
  {
    size = obj.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
      ptr[i] = obj.ptr[i];
  }
  ~Array() // деструктор
  {
    delete ptr;
  }
  int &operator[](int j) // перевизначення оператора індексації
  {
    return *(ptr + j);
  }
  Array operator=(Array &obj)
  {
    size = obj.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
      ptr[i] = obj.ptr[i];
  }
};

int main()
{
  const int ASIZE = 10;           // розмір масиву
  Array arr(ASIZE);               // створити масив
  for (int j = 0; j < ASIZE; j++) // заповнити його j * 2:
    arr[j] = j * j;
  for (int j = 0; j < ASIZE; j++) // вивести його вміст
    cout << arr[j] << ' ';
  cout << endl;

  Array arr2(arr);
  for (int j = 0; j < ASIZE; j++) // вивести його вміст
    cout << arr2[j] << ' ';
  cout << endl;

  Array arr3 = arr;
  for (int j = 0; j < ASIZE; j++) // вивести його вміст
    cout << arr3[j] << ' ';
  cout << endl;
  system("pause");
  return 0;
}