#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, a;
    cin >> n;
    int min = INT_MAX, max = INT_MIN;
    while (n--)
    {
        cin >> a;
        if (min > a) min = a;
        if (max < a) max = a;
    }
    cout << min << ' ' << max;
    return 0;
}
