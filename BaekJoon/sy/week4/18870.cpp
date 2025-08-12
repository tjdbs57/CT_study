#include <iostream>
#include <algorithm>

using namespace std;

bool compare(long long a, long long b) {
    return a < b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;                
    cin >> n;

    long long* cor = new long long[n];   
    for (int i = 0; i < n; i++) cin >> cor[i];

    long long* b = new long long[n];
    for (int i = 0; i < n; i++) b[i] = cor[i];

    sort(b, b + n, compare);
    long long* endp = unique(b, b + n);
    int m = int(endp - b);   

    for (int i = 0; i < n; i++) {
        int rank = int(lower_bound(b, b + m, cor[i]) - b);
        cout << rank << (i + 1 == n ? '\n' : ' ');
    }

    delete[] cor;
    delete[] b;
    return 0;
}
