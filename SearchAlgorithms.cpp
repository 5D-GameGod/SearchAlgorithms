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
int main()
{
	int arr[5] = { 1,2,5,4,5 };
	cout << "Please enter the number you want to search for" << endl;
	int num{};
	cin >> num;

	linearSearch(arr, num);

	return 0;
}

