#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int num, elm;
    cin >> num;
    int res = 0;

    stack<int> s;

    for(int i = 0; i < num; i++)
    {
        cin >> elm;
        if(elm == 0) {if(!s.empty()) s.pop();} else s.push(elm);

    }

    while(!s.empty())
    {
        res += s.top();
        s.pop();
    }

    cout << res;
    return 0;
}