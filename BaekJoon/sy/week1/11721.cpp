#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int strlen = n.size();
    for(int i = 0; i < strlen; i++)
    {
        cout << n[i];
        if (i % 10 == 9) cout << endl;
    }

    return 0;
}
