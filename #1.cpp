#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    getline(cin, s);
    int count = 1;
    for(unsigned i = 0; i<s.length(); i += 1)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        {
            count += 1;
        }
    }
    cout << count;
}
