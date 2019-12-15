#include <iostream>

using namespace std;

int main()
{
    string str, s = "";
    getline(cin, str);
    unsigned i = str.length()-1;
    int count = 0;
    while(count!=2)
    {
        if(int(str[i])==92)
        {
            count += 1;
        }
        i -= 1;
    }
    i += 2;
    while(int(str[i])!=92)
    {
        s += str[i];
        i += 1;
    }
    cout << s;
}
