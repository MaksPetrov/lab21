#include <iostream>
#include <cstring>
#include <clocale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    char str[]="¸óåûàîıÿèş¨ÓÅÛÀÎİßÈŞ";
    char s[100];
    cin.getline(s,100);
    OemToCharA(s,s);
    int count = 0;
    for(int i = 0; s[i]!=0; i += 1)
    {
        for(int j = 0; str[j]!=0; j += 1)
        {
            if(s[i]==str[j])
            {
                count += 1;
                break;
            }
        }
    }
    cout << count;
    return 0;
}
