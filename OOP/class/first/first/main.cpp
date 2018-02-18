#include <iostream>

using namespace std;

class Rectangle {
public:
	Rectangle() {
		h = 5;
		w = 10;
	}
	Rectangle(int a, int b = 5) {
		h = a;
		w = b;
	}
	~Rectangle() {
		cout << "\nEnd";
	}
	int area() {
		int s = h * w;
		return s;
	}
	int perimetr() {
		return 2 * (h + w);
	}
	void setHW(int a, int b) {
		h = a;
		w = b;
	}
private:
	int h;
	int w;
};

void czenebudz(Rectangle rect) {

}

int main() {
	Rectangle rect(7, 5);
	//rect.setHW(20, 7);
	cout << rect.area();
	
	czenebudz(rect);
	cout << "\n";
	system("pause");
	return 0;
}