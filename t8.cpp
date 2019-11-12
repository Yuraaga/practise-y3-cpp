#include <iostream>

// Взявши за основу програму із завдання 1, додайте метод типу
// bool, який називається isOveersize (), до класів book і tape. Припустимо, книга, в
// якій більше 800 сторінок, або касета з часом програвання якої більше 90
// хвилин, будуть вважатися об'єктами з перевищенням розміру. До цієї функції
// можна звертатися з main(), а результат її роботи виводити у вигляді рядка
// «Перевищення розміру!» Для відповідних книг і касет. Припустимо, об'єкти
// класів book і tape повинні бути доступні через покажчики на них, що
// зберігаються в масиві типу publication.

using namespace std;

class publication
{
protected:
  string name;
  float price;

public:
  publication()
  {
    this->name = "";
    this->price = 0.0;
  }
  void putdata()
  {
    cout << "name[string] = ";
    cin >> this->name;
    cout << "price[float] = ";
    cin >> this->price;
    cout << endl;
  }
  void printdata() { cout << "Name: " << this->name << ", price: " << this->price << endl; }
};
class type : public publication
{
protected:
  float time;

public:
  type() : publication() { this->time = 0.0; }
  void putdata()
  {
    cout << "time[float] = ";
    cin >> this->time;
  }
  void printdata() { cout << "Time: " << this->time << endl; }
  bool isOversized() { return time > 90; }
};

class book : public publication
{
protected:
  int pages;

public:
  book() : publication() { this->pages = 0; }
  void putdata()
  {
    cout << "pages[int] = ";
    cin >> this->pages;
  }
  void printdata() { cout << "Pages: " << this->pages << endl; }
  bool isOversized() { return pages > 800; }
};

int main()
{
  publication *arr[4];

  cout << "Data input" << endl;
  for (char i = 0; i < 4; i++)
  {
    if (i < 2)
    {
      book *b = new book();
      b->publication::putdata();
      b->putdata();
      if (b->isOversized())
        cout << "Oversized!" << endl;
      arr[i] = b;
    }
    else
    {
      type *t = new type();
      t->publication::putdata();
      t->putdata();
      if (t->isOversized())
        cout << "Oversized!" << endl;
      arr[i] = t;
    }
  }
  cout << "Data input end" << endl;

  cout << "Printing data from an array:" << endl;
  for (char i = 0; i < 4; i++)
    arr[i]->printdata();

  system("pause");
  return 0;
}
