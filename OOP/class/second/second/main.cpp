#include <iostream>
using namespace std;

class Complex
{
public:
	Complex() {
		re = 0;
		im = 0;
	}
	Complex(int complex_re, int complex_im) {
		re = complex_re;
		im = complex_im;
	}

	Complex sum(Complex c2) {
		Complex result;
		result.im = this->im + c2.im;
		result.re = this->re + c2.re;
		return result;
    }

	void setComplex(int complex_re, int complex_im) {
		re = complex_re;
		im = complex_im;
	}

	void out(){
		cout << this->re << " + " << this->im << "i";
	}

private:
	int re;
	int im;
};

int main() {
	Complex Obj1(5, 10), Obj2(3, 2);
	Complex result = Obj1.sum(Obj2);
	result.out();
	system("pause");
	return 0;
}