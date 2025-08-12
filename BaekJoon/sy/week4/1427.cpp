#include <iostream>
#include <algorithm>
using namespace std;
int arr[10];

int main()
{
	int num, cnt = 0;
	cin >> num;

	while (num != 0)
	{
		arr[cnt] = num % 10;
		cnt++;
		num /= 10;
	}
	sort(arr, arr + cnt, greater<int>());
	
	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i];
	}

	return 0;
}