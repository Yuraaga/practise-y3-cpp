//Ввести   двомірний   масив   який   містить    Nрядків    та M стовпців використовуючи
// динамічний    розподіл    пам’ять. Значення   N та M задайте  самі.
// Сформулюйте   одномірний    масив , який   складається   з максимальних   елементів   кожного   рядка.
#include <iostream>

using namespace std;

#define M 3
#define N 5

int main()
{
  int *a[M], max[M];
  for (int i = 0; i < M; i++)
  {
    a[i] = new int[N];
    max[i] = 0;
    for (int j = 0; j < N; j++)
    {
      cin >> a[i][j];
      if (a[i][j] > max[i])
        max[i] = a[i][j];
    }
    cout << "max[" << i << "] is " << max[i] << endl;
  }

  system("pause");
  return 0;
}