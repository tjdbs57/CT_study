#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        stack<int> s;

        string in;
        cin >> in;

        // 괄호 검사
        for(int j = 0; j < in.length(); j++)
        {
            if(s.empty()) s.push(in[j]); 
            else {
                if(s.top() == '(' && in[j] == ')') s.pop();
                else s.push(in[j]);
            }
        }
        if(s.empty()) cout << "YES" <<'\n';
        else cout << "NO" <<'\n';

    }

    return 0;
}