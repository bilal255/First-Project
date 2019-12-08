#include <iostream>
using namespace std;

int main()
{
	float x, y, temp;
	cout << "Enter two numbers to swap their position: ";
	cin >> x >> y;
	cout << "After swapping " << x << " and " << y << " : ";
	temp = x;
	x = y;
	y = temp;
	cout << x << " and " << y << endl;
	
	
	system ("pause");
	return 0;
}

