#include<iostream>

int main() 
{
	using namespace std;

	int A, B, V;
	cin >> A >> B >> V;

	int div = (V - B) / (A - B);

	if ((V - B) % (A - B))
		cout << div+1;
	else
		cout << div;
			


	return 0;
}