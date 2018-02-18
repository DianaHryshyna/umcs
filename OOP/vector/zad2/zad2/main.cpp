#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	vector<int> vecIntArr(5);
	for (int i = 0; i < vecIntArr.size(); ++i) {
		vecIntArr[i] = i + 1;
	}

	cout << "The first output: ";

	for (int i = 0; i < vecIntArr.size(); ++i) {
		cout << vecIntArr[i] << ends;
	}

	cout << endl << "The second output: ";

	vecIntArr.push_back(12);
	vecIntArr.pop_back();

	//vector<int>::iterator it = vecIntArr.begin();
	//vecIntArr.insert(it, 200);
	vecIntArr.insert(vecIntArr.begin() + 3, 20);

	for (int i = 0; i < vecIntArr.size(); ++i) {
		cout << vecIntArr[i] << ends;
	}

	int max = 0;
	for(int i = 0; i < vecIntArr.size(); ++i){
	    if (vecIntArr[i] == 0) {
		    max = vecIntArr[i];
		} else {
			if (vecIntArr[i] > max) {
				max = vecIntArr[i];
			}
		}
	}

    cout << endl << max << ends;
	system("pause");
	return 0;
}