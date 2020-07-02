#include <iostream>

#include <numeric>
class A {
public:
	A() {
	std::iota(std::begin(c), std::end(c), 0);
	}
	void printer() {
	for(auto i=0ULL; i<sizeof(c); i++) {
		if(c[i] * 256 == i && i > 0) {
			std::cout << i ;
		}
	}
		volatile auto x = sizeof(*this);
		std::cout << x << std::endl;
	}
private:

	unsigned char c[262144];

};
int main() {
	A a;
	a.printer();
}
