#include<iostream>

int main()
{
	using namespace std;

	int n;
	int count = 0;

		cin >> n;

		while (n > 0)
		{
			if (n % 5 == 0)
			{
				count++;
				n -= 5;
			}
			else if (n % 3 == 0)
			{
				count++;
				n -= 3;
			}
			else if (n > 5)
			{
				count++;
				n -= 5;
			}
			else
			{
				count = -1;
				break;
			}

		}
		cout << count << endl;
	
	return 0;
}