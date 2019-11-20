#include <iostream>
// Створіть функцію аmaх(), що повертає значення максимального
// елемента масиву. Аргументами функції повинні бути адреса і розмір масиву. Зробіть
// з функції шаблон, щоб вона могла працювати з масивом будь-якого числового типу.
// Напишіть функцію main(), в якій перевірите роботу функції з різними типами
// масивів.

using namespace std;

template <typename T>
T amax(T arr[], int size)
{
  T max = 0;
  for (int i = 0; i < size; i++)
    if (arr[i] > max)
      max = arr[i];

  return max;
}

int main()
{

  int arr[4] = {1, 4, 8, 4};
  double arr1[5] = {23.5, 25.52, 57.4, 14.4, 132.5};
  long arr2[3] = {1231235, 5345, 476547};

  cout << "int max: " << amax(arr, 4) << endl;
  cout << "double max: " << amax(arr1, 5) << endl;
  cout << "long max: " << amax(arr2, 3) << endl;
  system("pause");
}