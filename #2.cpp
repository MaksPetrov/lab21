#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    getline(cin, str);
    int smin = 0;
    while(str[smin]!=' ')
    {
        smin += 1;
    }
    for(unsigned i = smin; i<str.length(); i += 1)
    {
        int s = 0;
        while(str[i]!=' ' && i!=str.length())
        {
            i += 1;
            s += 1;
        }
        if(s<smin && s!=0)
        {
            smin = s;
        }
    }
    cout << smin;
}
