#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    int res;
    res = n % m;
    while(res)
    {
        n = m;
        m = res;
        res = n % m;        
    }
    return m;
}

int lcm (int n , int m)
{
    return (n * m) / gcd(n, m);
}
int main()
{
    int n, m;
    cin >> n >> m ;

    int max, min;
    max = gcd(n, m);
    min = lcm(n, m);

    cout << max << '\n' << min;

    return 0;
}