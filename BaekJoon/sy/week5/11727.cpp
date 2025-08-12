#include <iostream>
using namespace std;

//type!!
int main()
{

    long long int arr[1001] = { 0 };
    arr[0] = 1; arr[1] = 3;

    for (int i = 2; i <= 1000; i++)
    {
        arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 10007;
    }

    int num;
    cin >> num;

    cout << arr[num - 1] << "\n";

    return 0;
}
