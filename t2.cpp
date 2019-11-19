#include <iostream>
#include <string>

using namespace std;

struct author
{
  string name;
  string surname;
};

struct book
{
  string publication;
  int year;
  int size;
  author author;
};

int main()
{
  book B1, B2 = {"Pub", 2018, 200, {"Name", "Surname"}};
  B1.publication = "Test publication";
  B1.size = 300;
  B1.year = 2019;
  B1.author.name = "Test name";
  B1.author.surname = "Test surname";
  cout << "B1: " << endl
       << B1.publication << ", " << B1.year << ", " << B1.size << ", " << B1.author.name << ", " << B1.author.surname << endl;
  cout << "B2: " << endl
       << B2.publication << ", " << B2.year << ", " << B2.size << ", " << B2.author.name << ", " << B2.author.surname << endl;
  system("pause");
  return 0;
}