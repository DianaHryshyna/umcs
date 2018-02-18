#include <iostream>
#include <vector>
#include<iterator>
using namespace std;

int main() {
	vector<int> arr(5);//create the vector
	for (int i = 0; i < arr.size(); i++) {
		arr[i] = i;
		cout << arr[i] << " ";
	}
    
	arr.push_back(5);
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}

	vector<int> arr1(arr); //copy

	for (int i = 0; i < arr1.size(); i++) {
		
		cout << arr1[i] << " ";
	} //cout

	cout << endl;
	vector<int> array1; //empty vector

	//in the end of the vector add 4, 3, 2
	array1.insert(array1.end(), 4);
	array1.insert(array1.end(), 3);
	array1.insert(array1.end(), 2);

	
	//cout 
	copy(array1.begin(),
		array1.end(),
		ostream_iterator<int>(cout, " ")
	);

    cout << endl;

	//compare
	if (arr == arr1) {
		cout << "arr == arr1" << endl;
	}

	system("pause");
	return 0;
}