#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    int a_size = a.size();
    int b_size = b.size();
    int a_sum = 0, b_sum = 0;

    //길이가 다를 경우
    if (a_size != b_size) return a_size < b_size;
    
    for (int i = 0; i < a_size; i++)
    {
        if (a[i] >= '0' && a[i] <= '9') a_sum += int(a[i]) - 48;
        if (b[i] >= '0' && b[i] <= '9') b_sum += int(b[i]) - 48;

    }

    if (a_sum != b_sum) return a_sum < b_sum;

    else return a < b;
}
int main()
{
    int num;
    cin >> num;
    string str[51];

    int i = 0;
    while (i < num)
    {
        cin >> str[i];
        i++;
    }
    sort(str, str + num, compare);
    for (int i = 0; i < num; i++)
    {
        cout << str[i] << '\n';
    }
    
    return 0;
}
