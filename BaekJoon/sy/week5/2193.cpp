#include <iostream>
using namespace std;

//type!!
int main()
{

    long long int arr[91] = { 0 };
    arr[0] = 1; arr[1] = 1;

    for (int i = 2; i <= 90; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]);
    }

    int num;
    cin >> num;

    cout << arr[num - 1] << "\n";

    return 0;
}
