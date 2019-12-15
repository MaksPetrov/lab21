#include <iostream>

using namespace std;

int main()
{
    string str, s = "";
    getline(cin, str);
    unsigned i = str.length()-1, n = str.length()-1;
    while(int(str[i])!=92)
    {
        i -= 1;
    }
    while(str[n]!='.')
    {
        n -= 1;
    }
    i += 1;
    for(i; i<n; i += 1)
    {
        s += str[i];
    }
    cout << s;
}
