#include <iostream>
#include <vector>
using namespace std;

//-------------Linear Search Function------------- 
void linearSearch( int a[], int n)
{
	vector <int> index{};
	
	for(int i{0}; i < 5; i++)
	{
		if(a[i] == n)
		{
			index.push_back(i);
		}
	}
	if(index.size() == 0)
	{
		cout << "Number was not found" << endl;
	}
	else if(index.size() == 1)
	{
		cout << "Number was found at index " << index.at(0) << endl;
	}
	else
	{
		cout << "Number was found at index " << index.at(0);
		for(int i{1}; i < index.size(); i++)
		{
			cout << " and " << index.at(i);
		}
		cout << "." << endl;
	}
}
//------------------------------------------------

//-------------Binary Search Function------------- 
int binarySearch(int binaryArr[], int left, int right, int n)
{
	while(left <= right)
	{
		int mid = left + (right - left) / 2;
		if(binaryArr[mid] == n)
		{
			return mid;
		}

		else if(binaryArr[mid] < n)
		{
			left = mid + 1;
		}

		else
		{
			right = mid - 1;
		}
	}

	return -1;
}

//------------------------------------------------
int main()
{
	int arr[5] = { 1,2,5,4,5 };
	int binArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "Please enter the number you want to search for" << endl;
	int num{};
	cin >> num;

	linearSearch(arr, num);
	int output{};
	output = binarySearch(binArray,0,9,num);

	if(output == -1)
	{
		cout << "Number was not found" << endl;
	}
	else
	{
		cout << "Number found at index " << output << endl;
	}

	return 0;
}

