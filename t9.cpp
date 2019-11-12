#include <iostream>

using namespace std;

template <typename T>
T avg(T *arr, int size)
{
  T avg = 0;

  for (int i = 0; i < size; i++)
    avg += arr[i];

  return avg / size;
}

int main()
{
  int i[5] = {1, 2, 3, 4, 5};
  double d[8] = {1.5, 2.2, 3.7, 4.3, 5.5, 12.5, 16.6, 9.3};
  long l[3] = {25, 123, 76};
  char c[4] = {2, 5, 1, 4};

  cout << "i: " << avg(i, 5) << endl
       << "d: " << avg(d, 8) << endl
       << "l: " << avg(l, 3) << endl
       << "c: " << avg(c, 4) << endl;

  getchar();
  return 0;
}