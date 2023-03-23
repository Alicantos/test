#include <iostream>

#include <cstdlib>

#include <string>

 

int main()

{

  using namespace std; // активируем поиск имен в std.

 

  string worker_first_name = "worker"; // Определяем переменную для имени

  cout << "Введите имя: "; //Просим пользователя ввести имя

  cin >> worker_first_name; // Считываем значение имени.

  cout << "Привет, " << worker_first_name << "!" << endl;

  return 0;

}