#include <iostream>
using namespace std;

int max(int a, int b) {if (a < b) return b; return a;}
int main()
{
    int num;
    cin >> num;

    int arr[100001] = { 0 };
    int sum[100001] = { 0 };
   for (int i = 0; i < num; i++) {
       cin >> arr[i];
   }
   sum[0] = arr[0];
   int result = sum[0];
   for(int i = 1; i < num; i++)
   {
       sum[i] = max(arr[i], sum[i - 1] + arr[i]);
       result = max(result, sum[i]);
   }

   cout << result;   
    return 0;
}
