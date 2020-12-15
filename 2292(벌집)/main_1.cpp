#include<iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;

    int count = 2; //i 가 count가 되면 res++
	int plus = 6; // 가중치가 더해지면 숫자가 6개씩 더 많아짐
	int res = 1; // i가 1일때 결과는 1이므로 1로 초기화 

	for (int i = 2; i <= n; i++) //i가 1일때 반목문을 필요가 없기때문에 2부터 시작 
	{
		if(i==count)
		{
			count = count + plus;
			plus = plus + 6;
			res++;
		}
		
	}
	cout << res;
	return 0;
}
