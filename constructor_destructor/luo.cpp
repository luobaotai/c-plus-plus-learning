#include <iostream>

class Animal {
public:
	int head;
	int leg;

	Animal()
	: head(1), leg(4) {
		std::cout << "构造器" << std::endl;
	}

	Animal(int a, int b)
	: head(a), leg(b) {
		
	}

	~Animal() {
		std::cout << "析构器" << std::endl;
	}
};

void chifan() {
	Animal pig;
	Animal cow;
}

int main() {
	//在函数中生成两个局部变量，观察构造器和析构器的调用
	chifan();
	//生成一个对象，调用无参数构造器
	Animal dog;
	//生成一个对象，调用有参数构造器
	Animal cat(1, 4);

	std::cout << dog.head << std::endl;

	std::cin.get();
}
