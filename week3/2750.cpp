#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int num;
    cin >> num;

    int arr[10001];
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+num, less<int>());
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << '\n';
    }
    return 0;
}