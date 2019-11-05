#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  char file_name[32];

  cout << "Enter file name: ";
  cin >> file_name;

  ifstream file(file_name);

  cout << file.rdbuf();

  system("pause");
  return 0;
}