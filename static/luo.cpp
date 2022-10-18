#include <iostream>

//extern--外部的
//extern int number;

//static--只在本文件中使用
static int number = 888;

int main() {
	std::cout << number << std::endl;

	std::cin.get();
}