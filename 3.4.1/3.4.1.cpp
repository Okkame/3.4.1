﻿/*Задание вывести название дня недели, 1 — «понедельник», 2 — «вторник» и т. д.
* Суртаев Сергей ИВТ-32
* вариант 17
*
*/
#include <iostream>
#include <clocale> 

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите номер дня недели от 1 до 7\n";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "понедельник\n";
        break;
    case 2:
        cout << "вторник\n";
        break;
    case 3:
        cout << "среда\n";
        break;
    case 4:
        cout << "четверг\n";
        break;
    case 5:
        cout << "пятница\n";
        break;
    case 6:
        cout << "суббота\n";
        break;
    case 7:
        cout << "воскресенье\n";
        break;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
