#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;

    multimap<int, string> member;
    int t;
    string s;
    for(int i=0; i<n; i++){
        cin >> t >> s;
        member.insert({t, s});
    }

    for(auto i=member.begin(); i!=member.end(); i++){
        cout << i->first << " " << i->second << '\n';
    }
    return 0;
}
