#include<iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
    
    int count = 2; 
	int plus = 6; 
	int res = 1; 

	while (true)
	{
		if (n < count)break; //n이 범위에 있으면 끝
		else //없으면 더해주기
		{
			count = count+plus;
			plus += 6;
			res++;
		}
	}
	cout << res;
	return 0;
}
