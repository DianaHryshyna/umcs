#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Flower
{
public:
	Flower() {
		this->name = "NULL";
	}
	Flower(string str) {
		this->name = str;
	}
	void input() {
		cin >> this->name;
	}
	void output() {
		cout << this->name;
	}


private:
	string name;
};

class Flowerbed {
public:
	Flowerbed() {
	}
	Flowerbed(vector<Flower> vect) {
		this->flowers = vect;
	}
	
	void output() {
		for (int i = 0; i < this->flowers.size(); ++i) {
			this->flowers[i].output();
		}
	}

private:
	vector<Flower> flowers;
};

int main() {
	/*Flower Obj("qwerty");
	Obj.input();
	Obj.output();
	*/
	
	vector<Flower> vect;
	int n = 0;
	
	cout << "ENter amount of flowers";
	cin >> n;
	vect.resize(n);

	cout << "Enter name of each flower";
	for (int i = 0; i < vect.size(); ++i) {
		vect[i].input();
	}
	for (int i = 0; i < vect.size(); ++i) {
		vect[i].output();
		cout << ends;
	}

	system("pause");
	return 0;
}