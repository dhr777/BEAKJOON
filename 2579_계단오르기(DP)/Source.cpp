#include<iostream>
using namespace std;

int main()
{
	int arr[300];
	int arr2[300];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	arr2[0] = arr[0];
	arr2[1] = arr[0] + arr[1];
	arr2[2] = arr[2] + (arr[0] > arr[1] ? arr[0] : arr[1]);

	for (int i = 3; i < n; i++)
		arr2[i] = arr[i] + (arr[i - 1] + arr2[i - 3] > arr2[i - 2] ? arr[i - 1] + arr2[i - 3] : arr2[i - 2]);

	cout << arr2[n-1];


	return 0;
}