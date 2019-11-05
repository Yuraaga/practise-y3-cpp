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
  book B1, B2;
  B1.publication = "Test publication";
  B1.size = 300;
  B1.year = 2019;
  B1.author.name = "Test name";
  B1.author.surname = "Test surname";
  system("pause");
  return 0;
}