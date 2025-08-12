#include <iostream>
using namespace std;

long long factorial(int n){
    long long res = 1;
    for(int i=2; i<=n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int t, n;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;

        int a=0, b=0, c=0, sum=0, tmp=0;
        // a + 2b + 3c = n
        for(c=0; c<4; c++){
            for(b=0; b<6; b++){
                for(a=0; a<12; a++){
                    if(n == (a + 2*b + 3*c)){
                        if( (a==0) + (b==0) + (c==0) <= 1 ){
                            tmp = factorial(a+b+c);
                            if(a==0){
                                sum += tmp/(factorial(b)*factorial(c));
                            }
                            else if(b==0){
                                sum += tmp/(factorial(a)*factorial(c));
                            }
                            else if(c==0){
                                sum += tmp/(factorial(a)*factorial(b));
                            }
                            else{ // 셋 다 0이 아닐 때
                                sum += tmp/(factorial(a)*factorial(b)*factorial(c));
                            }
                        }
                        else{
                            sum++;
                        }
                        // cout << a << " " << b << " " << c << '\n';
                    }
                }
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
