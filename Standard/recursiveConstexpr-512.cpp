#include <iostream>
constexpr unsigned long long sum(unsigned long long n, unsigned long long s=0) {
	return n ? sum(n-1,s+n) : s;
}
constexpr unsigned long long k = sum(512);

int main() {
	std::cout << k<<std::endl;
}