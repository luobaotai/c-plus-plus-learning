#include <iostream>

void chifan() {
	static int luo = 0;
	luo++;
	std::cout << luo << std::endl;
}

int main() {

	//打印1，2，3，因为luo是静态局部变量，不会在函数退出时被销毁
	chifan();
	chifan();
	chifan();

	std::cin.get();
}
