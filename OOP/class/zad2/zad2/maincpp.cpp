#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum Color
{
	RED,
	GREEN,
	BLUE,
	UNDEFINED
};

class Pencil {
public:
	Pencil() {
		this->color = Color::UNDEFINED;
		this->size = 0;
	}
	Pencil(int s, Color col = Color::UNDEFINED) {
		this->color = col;
		this->size = s;
	}
	
	void input() {
		string str;
		cin >> str;
		if (str == "red") {
			color = Color::RED;
		}
		else if (str == "green") {
			color = Color::GREEN;
		}
		else if (str == "blue") {
			color = Color::BLUE;
		}
		else {
			color = Color::UNDEFINED;
		}
		cin >> this->size;
	}

	void output() {
		switch (color) {
		case Color::RED: cout << "red";
			break;
		case Color::GREEN: cout << "green";
			break;
		case Color::BLUE: cout << "blue";
			break;
		case Color::UNDEFINED: cout << "-----";
			break;
		default: cout << "The color is undefined";
		}
		cout << ", the size is:" << this->size << endl;
	}

	bool operator< (Pencil p) {
		return (this->size < p.size);
	}

	Pencil operator+ (Pencil p) {
		int size1 = this->size + p.size;
		Pencil p1(size1, RED);
		return p1;
	}
	
private:
	Color color;
	int size;
};

class PencilCase {
public:
	PencilCase() {
	}
	PencilCase(vector<Pencil> temp) {
		pencils = temp;
	}

	void output() {
		cout << "Pencilcase:" << endl;
		for (int i = 0; i < pencils.size(); ++i) {
			pencils[i].output();
		}
		cout << endl;
	}

	void add(Pencil obj) {
		pencils.push_back(obj);
	}

private:
	vector<Pencil> pencils;
};


int main() {
	Pencil p1(7, RED), p3(3), p4;

	Pencil p2;
	//cout << "Enter color and size of the pencil: ";
	//p2.input();
	
	/*PencilCase obj;
	obj.add(p1);
	obj.add(p2);
	obj.add(p3);
	obj.add(p4);
	obj.add(Pencil(5, BLUE));
	obj.output();*/
	//cout << (p3 < p1);
	//cout << p3.operator<(p1);
	Pencil obj;
	obj = p3 + p1;
	obj.output();
	system("pause");
	return 0;
}