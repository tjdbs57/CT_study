#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, tmp;
    cin >> n;

    int arr[10001] = {0, };
    for(int i=0; i<n; i++){
        cin >> tmp;
        arr[tmp]++;
    }

    for(int i=1; i<=10000; i++){
        for(int j=1; j<=arr[i]; j++){
            cout << i << '\n';
        }
    }

    return 0;
}
