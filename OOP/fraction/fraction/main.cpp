#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction() {
	    int_part = 0;
	    frac_part = 0;
	}

	Fraction(int a, int b) {
		int_part = a;
		frac_part = b;
	}
	
	Fraction sum(Fraction c2) {
		Fraction result;
		result.int_part = this->int_part + c2.int_part;
		result.frac_part = this->frac_part + c2.frac_part;
		return result;
	}

	void setFraction(int a, int b) {
		int_part = a;
		frac_part = b;
	}

	void out() {
		cout << int_part << "," << frac_part;
	}6
	
private:
	int int_part;
	int frac_part;
};

int main() {

	Fraction Obj1(5, 2), Obj2(3, 9);
	Fraction result = Obj1.sum(Obj2);
	result.out();

	system("pause");
	return 0;
}