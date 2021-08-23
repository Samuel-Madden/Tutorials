//Kth Smallest Element

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int kthSmallest(int n, int k, vector<int> arr) {
	return(arr[k-1]);
}

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end()); //sorted the array before passing it to the function

	int ans = kthSmallest(n, k, arr);

	cout << endl << ans;
	return 0;
}
