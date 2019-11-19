
// Напишіть програму, яка емулює команду COPY (MS DOS). Тобто програма повинна копіювати  вміст  одного  файлу  в  іншій.
// Необхідно  використовувати  два  аргументи  командної стрічки -вихідний файл і файл призначення.
// Наприклад: С: \>ocopy srcfile.cpp destfile.cpp
// Здійснюйте  перевірку  числа  аргументів  командного  рядка  і  можливість
// відкриття  вказаних користувачем файлів.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  ifstream in("copyfrom.txt");
  ofstream out("copyto.txt");

  string str;

  while (getline(in, str))
    out << str << endl;

  in.close();
  out.close();
}