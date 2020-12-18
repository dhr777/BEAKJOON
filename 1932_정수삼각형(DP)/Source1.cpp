#include<iostream>

int main() 
{
	using namespace std;

	int n;
	int arr[500][500] = { 0 };
	int max = -1;

	cin >> n;

	for (int i = 0; i < n; i++)  // 입력
	{
		for (int j = 0; j < i + 1; j++) cin >> arr[i][j];
	}

	arr[1][0] += arr[0][0];
	arr[1][1] += arr[0][0]; //첫번째 줄은 숫자가 하나기 때문에 그냥 더해주기

	for (int i = 2; i < n; i++) //세번째 라인부터 시작
	{
		arr[i][0] += arr[i - 1][0];
		arr[i][i] += arr[i - 1][i - 1];
		// 첫번째 숫자와 마지막 숫자는 하나만 더 할 수 있음

		for (int j = 1; j < i; j++)
		{
			arr[i][j] += arr[i - 1][j - 1] > arr[i - 1][j] ? arr[i - 1][j - 1] : arr[i - 1][j];
		} //위 두개의 숫자중 더큰 숫자를 더해 대입한다.
	}

	
	for (int i = 0; i < n; i++)max = max > arr[n - 1][i] ? max : arr[n - 1][i];
	cout << max; //최대값 찾고 출력
	return 0;
}