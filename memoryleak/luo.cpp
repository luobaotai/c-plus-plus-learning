#include <iostream>
#include <string>

class Food {
public:
	int number;

	Food() : number(1) {
		std::cout << "Food construct" << std::endl;
	}
};


int main() {

	Food* p;

	{
		Food* f = new Food();
		f->number = 100;
		p = f;
		delete f; //如果不删除f，那么就会产生内存泄漏
	}

	std::cin.get();
}
