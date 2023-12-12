
#include <iostream>

using namespace std;

int main()
{

    int x, n;
    cin >> x >> n;

    if (!n)
        cout << 20;
    else if (n == 7)
        cout << x;
    else if (x > n)
        cout << x - n;
    else
        cout << 0;

    return 0;
}
