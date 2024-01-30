#include <iostream>
#include <String>
#include <cctype>
using namespace std;
int main()
{
	int count = 0;
	int size;
	cin >> size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	/////////////////////
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	//////////////////////
	int min = arr[size - 1];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	int left, right;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max)
		{
			left = i;
			break;

			//			cout<<"index of max is "<<i<<endl ;
		}
	}
	////////
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == min)
		{
			right = i;
		}
	}
	while (true)
	{

		if (arr[0] == max and arr[size - 1] == min)
		{
			count = 0;
			cout << count;
			break;
		}

		if (left > right)
		{

			count = left + (size - right - 2);
			cout << count;
			break;
		}
		else
		{
			count = left + (size - right - 1);
			cout << count;
			break;
		}
	}

	return 0;
}
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
