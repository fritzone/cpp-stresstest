#include <iostream>

template<typename T>
struct B {
	typedef T BT;
};
template<int N>
struct C {
	typedef typename B<typename C<N-1>::T>::BT T;
};
template<>
struct C<0> {
	typedef int T;
};

int main()
{
	C<1024>::T c = 1024;
	std::cout << c << std::endl;
}
