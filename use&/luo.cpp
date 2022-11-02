#include <iostream>
#include <string>

int& chifan(int& c) {
	return c;
}

int main() {
	
	int a = 5;

	int& b = chifan(a);

	b++;

	//a作为引用传入chifan函数，所以函数里面操作的就是a本身，所以a变成6
	std::cout << a << std::endl;

	std::cin.get();
}
