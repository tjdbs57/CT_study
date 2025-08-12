#include <iostream>
using namespace std;

//type!!
int main()
{
    int t;
    cin >> t;
    
    long long arr[101] = { 0 };
    arr[0] = 1;     arr[1] = 1;     arr[2] = 1;

    for (int i = 3; i <= 100; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 3];
    }
    while (t--)
    {
        int num;
        cin >> num;

        cout << arr[num-1] << "\n";
    }
    return 0;
}
