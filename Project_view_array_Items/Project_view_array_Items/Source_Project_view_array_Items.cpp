#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	cout << "========================" << endl;
	cout << "+++++ ARRAY +++++\n";
	cout << "========================" << endl;
	int n = 0;
	cout << "input n: \n";
	cin >> n;
	srand(time(0));

	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 20;
	}
	cout << "Array is: \n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";
	return 0;
}