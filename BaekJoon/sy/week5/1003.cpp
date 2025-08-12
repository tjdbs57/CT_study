#include <iostream>
using namespace std;


int main()
{
    int t;
    cin >> t;
    int zero_count[50] = { 0 }, one_count[50] = { 0 };

    //inital
    zero_count[0] = 1, one_count[0] = 0;
    zero_count[1] = 0, one_count[1] = 1;

    for (int i = 2; i <= 40; i++)
    {
        zero_count[i] = zero_count[i - 1] + zero_count[i - 2];
        one_count[i] = one_count[i - 1] + one_count[i - 2];
    }
    while (t--)
    {
        int num;
        cin >> num;
        

        cout << zero_count[num] << " " << one_count[num] << "\n";
    }
    return 0;
}
/*
void fibonacci(int n, int& zero_count, int& one_count) {
    if (n == 0) {
        zero_count++;
    }
    else if (n == 1) {
        one_count++;
    }
    else {
        fibonacci(n - 1, zero_count, one_count);
        fibonacci(n - 2, zero_count, one_count);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num, zero_count = 0, one_count = 0;
        cin >> num;
        fibonacci(num, zero_count, one_count);
        cout << zero_count << " " << one_count << "\n";
    }
    return 0;
}
*/

