#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string tempstr;
  unsigned long int tempint;
  ofstream file("ku.txt");
  while (true)
  {
    cout << "Enter name or 'end' to exit: ";
    cin >> tempstr;
    if (tempstr == "end")
      break;
    file << tempstr << ",";
    cout << "Enter surname: ";
    cin >> tempstr;
    file << tempstr << ",";
    cout << "Enter pobatykovi: ";
    cin >> tempstr;
    file << tempstr << ",";
    cout << "Enter number: ";
    cin >> tempint;
    file << tempint << "\n";
  }
  file.close();
  ifstream ffile("ku.txt");
  cout << ffile.rdbuf() << endl;
  system("pause");
  return 0;
}