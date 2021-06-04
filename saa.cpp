#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 14, 3, 6, 27, 12 };
	for (auto item: arr) // compiler t? d?ng xác d?nh ki?u cho item
	{
		cout << item << " ";
	}
	cout << endl;

	return 0;
}
