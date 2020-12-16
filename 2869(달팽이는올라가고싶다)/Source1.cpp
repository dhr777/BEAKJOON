#include<iostream>

int main() 
{
	using namespace std;

	int A, B, V;
	cin >> A >> B >> V;

	int n=0;
	int day = 0;
	while (true)
	{
		day++;
		n = n + A;
		if (n >= V)break;
		n = n - B;
	}
	cout << day;
	return 0;
}  