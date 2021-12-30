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
        cout << "�������� ������� ������" << endl;
        cout << "1 - �������� �����  " << endl;
        cout << "2 - ������� ����� �� 2-��� � 10-��� �������" << endl;
        cout << "3 - ���������� �����������" << endl;
        cout << "4 - ������ " << endl;
        cout << "5 - �����" << endl;
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
    cout << "������� ����� �� 0 �� 9" << endl;
    int c;
    cin >> c;
    
    switch (c)
    {
    case 1: cout << "����" << endl; break;
    case 2: cout << "���" << endl; break;
    case 3: cout << "���" << endl; break;
    case 4: cout << "������" << endl; break;
    case 5: cout << "����" << endl; break;
    case 6: cout << "�����" << endl; break;
    case 7: cout << "����" << endl; break;
    case 8: cout << "������" << endl; break;
    case 9: cout << "������" << endl; break;
    case 0: cout << "����" << endl; break;
    };

    return 0;
}





void ksu()
{
    
    //���� �����
    cout << "������� ����� � 2-�� �������:\n";
    int digit;
    cin >> digit;
    int i = 0;
    int digitT = digit;
    int rest = 1;
    //����������� ����� ��������
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
        //�������� �� ����������
        cout << "����� ������� �������\n";
    }
    else
    {
        //���� �����������, ���� ����� ��������
        while (i > 0)
        {
            rest = digitT % 10;
            digitT = digitT / 10;
            sum = sum + rest * two;
            two = two * 2;
            i = i - 1;
        }
        //����� �����������
        cout << "���������: \n"
            << "2-��: " << digit << endl
            << "10-��: " << sum << endl;
    }
    system("pause");
}


int sash() {
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;
    char operation;
    std::cout << "������� 1-� ����� �����: ";
    std::cin >> a;
    std::cout << "������� 2-� ����� �����: ";
    std::cin >> b;
    std::cout << "���������: ";
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
        std::cout << "������\n";
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


