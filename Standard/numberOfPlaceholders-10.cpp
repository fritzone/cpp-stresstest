#include <iostream>

#include <functional>
struct Summer {
	int calculate(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10) {
		return p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10;		}
};
int main() {
	using SUM = std::function<int(int,int,int,int,int,int,int,int,int,int)>;
	Summer a;
	SUM f = std::bind(&Summer::calculate, &a,std::placeholders::_1,std::placeholders::_2,std::placeholders::_3,std::placeholders::_4,std::placeholders::_5,std::placeholders::_6,std::placeholders::_7,std::placeholders::_8,std::placeholders::_9,std::placeholders::_10);
	std::cout << f(1, 1, 1, 1, 1, 1, 1, 1, 1, 1) << std::endl;
}
