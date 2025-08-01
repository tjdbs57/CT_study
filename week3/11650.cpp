#include <iostream>
#include <algorithm>
using namespace std;

struct coordinate {	
	int x, y;
};

bool compare(coordinate a, coordinate b) {
	if (a.x == b.x) {
		return a.y < b.y;
	}
	else {
		return a.x < b.x;
	}
}
int main()
{
	int n, x, y;
	cin >> n;
	struct coordinate arr[100001];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr, arr + n, compare);
	for (int i = 0; i < n; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
	return 0;
}