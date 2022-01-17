#include <iostream>

int evenNumSum(const int arr[], const unsigned size) 
{
	if (arr == nullptr)
	{
		return -1;
	}

    int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
		{
			sum += arr[i];
		}
	}

	return sum;
}

int main()
{
	int arr[] = { 1,2,3,5,3,2 };

	std::cout << evenNumSum(arr, 6);
}