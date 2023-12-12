

#include <iostream>

using namespace std;

int main()
{

    string str;
    cin >> str;

    for (int i = 0; str[i]; i++)
    {
        cout << str[i] << ": ";
        for (int j = 0; j < str[i] - '0'; j++)
            cout << str[i];
        cout << endl;
    }

    return 0;
}
