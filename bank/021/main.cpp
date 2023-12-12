

#include <iostream>

using namespace std;

int main()
{

    int n, count = 0, arr[1001];
    do
    {
        cin >> n;
        arr[count++] = n;
    } while (n);

    for (int i = count - 2; i >= 0; i--)
        cout << arr[i] << endl;

    return 0;
}
