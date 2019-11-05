#include <iostream>
#include <string>

using namespace std;

void print_stars(unsigned char n)
{
  string result;
  for (; n != 0; n--)
    result += "*";
  cout << result << endl;
}

int main()
{
  print_stars(5);
  system("pause");
  return 0;
}