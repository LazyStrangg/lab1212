#include <iostream>
#include <string>
using namespace std;
string Show(char c)
{
   
  
    switch (c)
    {
    case '1': return "один";
    case '2': return "два";
    case '3': return "три";
    case '4': return "четыре";
    case '5': return "пять";
    case '6': return "шесть";
    case '7': return "семь";
    case '8': return "восемь";
    case '9': return "девять";
    case '0': return "ноль";
    };

    return "это не число";
}

int main()
{
    setlocale(LC_CTYPE, "ru");
    cout << "введите чисто от 0 до 9" << endl;
    char c;
    cin >> c;
    cout << Show(c);

    return 0;
}