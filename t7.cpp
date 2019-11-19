#include <iostream>
#include <string>
using namespace std;
class Spivrobitnuk
{
private:
  string surname;
  int strahnum;
  int salary;

public:
  Spivrobitnuk(string surname, int strahnum, int salary)
  {
    this->surname = surname;
    this->strahnum = strahnum;
    this->salary = salary;
  }
  string getName() { return this->surname; }
  int getStrahnum() { return this->strahnum; }
  int getSalary() { return this->salary; }
};
class SpivrobGodun : public Spivrobitnuk
{
private:
  int salaryPerHour, workedHours;

public:
  SpivrobGodun(string surname, int strahnum, int salary, int salaryPerHour, int workedHours) : Spivrobitnuk(surname, strahnum, salary)
  {
    this->salaryPerHour = salaryPerHour;
    this->workedHours = workedHours;
  }
  int getHours() { return this->workedHours; }
  void printCheck()
  {
    cout << "Surname: " << this->getName() << ", strahnum: " << this->getStrahnum() << ", salaryPerHour: " << this->salaryPerHour << ", workedHours: " << this->workedHours << ", salary: " << this->getSalary() << endl;
  }
};
int main()
{
  SpivrobGodun("Kitskai", 1337, 999999, 10000, 145).printCheck();
  system("pause");
  return 0;
}