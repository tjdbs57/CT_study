#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int m, n;
    cin >> m;

    n = m;
    int len = 1;
    int p = 0;
    while(n>10){
        n /= 10;
        len++;
    }

    int* arr = new int[len];

    for(int i=0; i<len; i++){
        p = pow(10, len-1-i);
        arr[i] = m / p;
        m = m % p;
    }

    sort(arr, arr+len, greater<>());
    for(int i=0; i<len; i++){
        cout << arr[i];
    }

    delete[] arr;
    return 0;
}
