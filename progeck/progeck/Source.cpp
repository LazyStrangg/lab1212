#include <iostream>
#include <string>

#include <chrono>
#include <thread>
using namespace std;

int li();
void ksu();
int sash();
void Timer();

int main() {
  
   
    setlocale(LC_CTYPE, "Russian");
    int choice;
    do
    {
        cout << "Выберите вариант работы" << endl;
        cout << "1 - название числа  " << endl;
        cout << "2 - перевод числа из 2-ной в 10-ную систему" << endl;
        cout << "3 - простейший калькулятор" << endl;
        cout << "4 - таймер " << endl;
        cout << "5 - выход" << endl;
        cin >> choice;

        switch (choice) {
        case 1:

            li(); break;

        case 2:
            ksu(); break;
        case 3: sash(); break;

        case 4: Timer(); break;
        }


    } while (choice != 5);

}





int li()
{
    cout << "введите число от 0 до 9" << endl;
    int c;
    cin >> c;
    
    switch (c)
    {
    case 1: cout << "один" << endl; break;
    case 2: cout << "два" << endl; break;
    case 3: cout << "три" << endl; break;
    case 4: cout << "четыре" << endl; break;
    case 5: cout << "пять" << endl; break;
    case 6: cout << "шесть" << endl; break;
    case 7: cout << "семь" << endl; break;
    case 8: cout << "восемь" << endl; break;
    case 9: cout << "девять" << endl; break;
    case 0: cout << "ноль" << endl; break;
    };

    return 0;
}





void ksu()
{
    
    //Ввод числа
    cout << "введите чисто в 2-ой системе:\n";
    int digit;
    cin >> digit;
    int i = 0;
    int digitT = digit;
    int rest = 1;
    //Определение числа разрядов
    while (digitT >= 1 && rest <= 1)
    {
        rest = digitT % 10;
        digitT = digitT / 10;
        i = i + 1;
    }
    int two = 1;
    int sum = 0;
    digitT = digit;
    if (rest > 1)
    {
        //Проверка на двоичность
        cout << "число введино неверно\n";
    }
    else
    {
        //Цикл выполняется, если число двоичное
        while (i > 0)
        {
            rest = digitT % 10;
            digitT = digitT / 10;
            sum = sum + rest * two;
            two = two * 2;
            i = i - 1;
        }
        //Вывод результатов
        cout << "резутьтат: \n"
            << "2-ая: " << digit << endl
            << "10-ая: " << sum << endl;
    }
    system("pause");
}


int sash() {
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "Введите 1-е целое число: ";
    std::cin >> a;
    std::cout << "Введите 2-е целое число: ";
    std::cin >> b;
    std::cout << "Результат: ";
    std::cin >> operation;

    switch (operation) {
    case '-':
        std::cout << "a - b = " << a - b << '\n';
        break;
    case '+':
        std::cout << "a + b = " << a + b << '\n';
        break;
    case '*':
        std::cout << "a * b = " << a * b << '\n';
        break;
    case '/':
        std::cout << "a / b = " << a / b << '\n';
        break;
    default:
        std::cout << "Ошибка\n";
    }
    return 0;
}



void Timer() {
    int hours = 0, minutes = 0, seconds = 0;
    while (true) {
        cout << hours << ":" << minutes << ":" << seconds;
        seconds++;
        if (seconds == 60) {
            seconds = 0;
            minutes++;
        }
        if (minutes == 60) {
            minutes = 0;
            hours++;
        }
        this_thread::sleep_for(0.999s);
        system("cls");
    }
}


