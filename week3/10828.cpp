#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int num, elm;
    cin >> num;
    int res = 0;

    stack<int> s;
    while(num--)
    {
        string c;
        cin >> c;

        //push
        if(c == "push")
        {
            cin >> elm;
            s.push(elm);
        }

        //pop
        else if(c=="pop")
        {
            if(s.size()==0) {res = -1; cout <<res <<'\n';}
            else {cout << s.top() << '\n'; s.pop();}
        }
        //top
        else if(c=="top") {
            if(s.size()==0) {res = -1; cout << res <<'\n';}

            else{cout << s.top()<< '\n';}
        }
        //size
        else if(c=="size") cout << s.size() << '\n';
        //empty
        else if(c=="empty") 
        {
            if(s.size() == 0)
            {
                res = 1;
                cout << res << '\n';
            }
            else{res = 0; cout << res << '\n';}
        }

    }

    return 0;
}