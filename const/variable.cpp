#include <iostream>
#include <string>

int main() {
	
	const int a = 5;
	//const修饰的变量为常量，不可修改
	//a = 9;//这样写错误

	int b = 5;
	int d = 6;

	//const修饰指针变量，在指针前面，则该变量指向的地址可以变，但是值不能变
	const int* c = &b;
	//*c = 50;//这样写错误
	c = &d;

	//const修饰指针变量，在指针后面，则该变量指向的地址不能变，但是值可以变
	int* const e = &b;
	//e = &d;//这样写错误
	*e = 100;

	std::cout << *c << std::endl;
	std::cout << b << std::endl;

	std::cin.get();
}
