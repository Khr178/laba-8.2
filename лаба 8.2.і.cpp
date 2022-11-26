// ƒано л≥терний р€док, €кий м≥стить посл≥довн≥сть символ≥в s0, Е, sn, Е.√рупи
// символ≥в, в≥докремлен≥ проб≥лами(одним або к≥лькома) ≥ €к≥ не м≥ст€ть проб≥л≥в, будемо
// називати словами.«найти к≥льк≥сть сл≥в, €к≥ починаютьс€ з букви УbФ.

#include <iostream>
#include <string>

using namespace std;

int Count(const string s)
{
    int c = 0;
    if (s[0] == 'b')
    {
        c++;
    }
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == ' ' && s[i + 1] == 'b')
        {
            c++;
        }
    }
    return c;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Count: " << Count(str) << endl;
    return 0;
}