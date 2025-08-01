#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    string s;
    cin >> num >> s;  

    for (int i = 0; i < num; i++)
    {
        sum += s[i] - '0';     
    }

    cout << sum;
    return 0;
}
