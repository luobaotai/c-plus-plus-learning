#include <iostream>

//extern--外部的
//extern int number;

//static--只在本文件中使用
//静态变量
static int number = 888;

//静态函数
static void chifan(){

}

int main() {
	std::cout << number << std::endl;

	std::cin.get();
}
