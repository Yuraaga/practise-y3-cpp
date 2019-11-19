#include <iostream>
#include <string.h>

using namespace std;

#define AMOUNT 5
#define LENGTH 32

int main()
{
  char strings[AMOUNT][LENGTH];
  cout << "Enter 5 cities" << endl;
  for (int i = 0; i < AMOUNT; i++)
    cin >> strings[i];

  for (int i = 1; i < AMOUNT; i++)
  {
    for (int j = 1; j < AMOUNT - i; j++)
    {
      if (strcmp(strings[j - 1], strings[j]) > 0)
      {
        char temp[LENGTH];
        strcpy(temp, strings[j - 1]);
        strcpy(strings[j - 1], strings[j]);
        strcpy(strings[j], temp);
      }
    }
  }

  for (int i = 0; i < AMOUNT; i++)
    cout << strings[i] << ", ";
  cout << endl;
  system("pause");
  return 0;
}