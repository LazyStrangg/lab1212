#include <iostream>
#include <string>
using namespace std;
string Show(char c)
{
   
  
    switch (c)
    {
    case '1': return "����";
    case '2': return "���";
    case '3': return "���";
    case '4': return "������";
    case '5': return "����";
    case '6': return "�����";
    case '7': return "����";
    case '8': return "������";
    case '9': return "������";
    case '0': return "����";
    };

    return "��� �� �����";
}

int main()
{
    setlocale(LC_CTYPE, "ru");
    cout << "������� ����� �� 0 �� 9" << endl;
    char c;
    cin >> c;
    cout << Show(c);

    return 0;
}