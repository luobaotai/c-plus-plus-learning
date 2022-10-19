#include <iostream>

class Animal {
public:
	//静态成员变量
	static int head;
	static int leg;

	void chifan() {
	
	}
};

// :: 指的是命名空间
int Animal::head = 1;
int Animal::leg = 4;

int main() {

	Animal cat;
	Animal dog;

	//dog更改head，所有Animal类的对象的head全部更改
	dog.head = 5;

	std::cout << cat.head << std::endl;

	std::cin.get();
}
