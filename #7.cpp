#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str, s = "";
    getline(cin, str);
    for(unsigned i = 1; i<str.length(); i += 2)
    {
        s += str[i];
    }
    if(str.length()%2!=0)
    {
        for(int i = str.length()-1; i>=0; i -= 2)
        {
            s += str[i];
        }
    }
    else
    {
        for(int i = str.length()-2; i>=-0; i -= 2)
        {
            s += str[i];
        }
    }
    cout << s;
}
