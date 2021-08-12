#include<iostream>
using namespace std;
void main()
{
	const int size = 5;
	char grade[size];
	int x = 0;
	
	for (int i = 0; i < size; i++)
	{
		cin >> grade[i];
		cout << "x[" << i << "]=" << endl;
	}

	for (int i = 0; i < size; i++) {
		if (grade[i] == 'f' || grade[i] == 'F')
		{
			x = 1;
		}
	}
	if (x == 0)
	{
		cout << "notfound" << endl;
	}
		else {
		cout << "found" << endl;
			
		}
}