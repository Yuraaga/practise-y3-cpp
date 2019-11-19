#include <iostream>
#include <string.h>
using namespace std;

// Введіть назву міста в якому ви живете та назву вулиці, як одне
// текстове дане. Визначити його довжину. Розв’язати задачу відповідно
// до вашого варіанта.
// 1. Вивести найкоротше слово.
// 2. Вивести найдовше слово.
// 3. З’єднати назву міста та назву вулиці в один рядок.
// 4. Вивести назву міста у зворотньому порядку.

int main()
{
  char city[] = "Ternopil Vulitsa";
  cout << city << endl;
  cout << "strlen = " << strlen(city) << endl;

  char *word1 = strtok(city, " ");
  char *word2 = strtok(NULL, " ");

  cout << "Biggest word/Smallest word: ";
  if (strlen(word1) > strlen(word2))
  {
    cout << word1 << "/" << word2;
  }
  else
  {
    cout << word2 << "/" << word1;
  }
  cout << endl;

  char full[64] = "";

  strcat(full, word1);
  strcat(full, " ");
  strcat(full, word2);

  cout << full << endl;

  for (int i = strlen(word1) - 1; i != -1; i--)
    cout << word1[i];

  cout << endl;
  system("pause");
  return 0;
}