#include <iostream>
using namespace std;

int main()
{
    int T; 
    cin >> T;
    int a = 0, b = 0;
    for(int i = 1; i <= T; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a+b << endl;  

    }
    return 0;
}