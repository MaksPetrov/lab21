#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char a = str[0];
    for(unsigned i = 1; i<str.length(); i += 1)
    {
        if(str[i-1]==' ' && str[i]!=' ')
        {
            a = str[i];
        }
        if(str[i]==a && str[i-1]!=' ')
        {
            str[i] = '.';
        }
    }
    cout << str;
}
