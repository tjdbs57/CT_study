#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cin.tie(NULL);
    
    int a, b, tmp = 0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        tmp = 1;
        if(i==1)    continue;        
        for(int j=2; j<=sqrt(i); j++){
            if(i%j==0){
                tmp=0;
                break;
            }
            else{
                tmp=1;
            }
        }
        if(tmp) cout << i << '\n';
    }
    
    return 0;
}
