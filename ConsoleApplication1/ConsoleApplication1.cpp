#include <iostream>
using namespace std;

int main() {
	int t;
	for (t + 1; t <= 6; t++)
	{
		cout << t << " fibil" << endl;
	}
	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		cout << " masukkan nickname";
		cin >> arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		cout << "nilaia array:" << arr[i] << endl;
	}

	return 0;
}
