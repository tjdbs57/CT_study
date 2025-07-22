#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, tmp = 0;
    cin >> n;

    if(n==1)    return 0;
    for(int i=2; i<=n; i++){
        while(n%i==0){
            cout << i << '\n';
            n /= i;
        }
    }
    return 0;
}
