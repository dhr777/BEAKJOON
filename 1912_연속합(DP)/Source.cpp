#include<iostream>

/*
2	1   -4  3	4   -4  6   5   -5
2	3   -1  3	7   3   9   14  9  //분할 최대값
*/
int main() 
{
	using namespace std;

	int n;
	int arr[100000];
	int sum[100000];
	cin >> n;
	
	for (int i = 0; i < n; i++)cin >> arr[i]; //입력

	sum[0] = arr[0];
	int max = sum[0];

	for (int i = 1; i < n; i++)
	{
		sum[i] = arr[i] > arr[i] + sum[i - 1] ? arr[i] : arr[i] + sum[i - 1]; //부분합 점화식
		max = max > sum[i] ? max : sum[i]; //최대값 찾기
	}

	cout << max << endl;;
	
	
	return 0;
}