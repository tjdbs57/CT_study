#include <iostream>
using namespace std;


int main()
{
    int N, num;
    int count=0;
    cin >> N;

    int i;
    while(N--)
    {
        cin >> num;
        for(i = 2; i < num; i++)
        {
            if(num % i == 0) break;

        }
        if (i==num) count++;
    }
    cout << count;
    return 0;
}