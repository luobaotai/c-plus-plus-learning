#include <iostream>
#include <string>
#include <array>
#include <functional>

//std--标准库命名空间
//命名空间只有一个作用，就是为了防止命名冲突
namespace apple {
	void print(const char* name) {
		std::cout << name << "$$$$$$$$" << std::endl;
	}
}

namespace orange {
	void print(const char* name) {
		std::cout << name << "********" << std::endl;
	}
}


//lamda 匿名函数


void forloop(int a, const std::function<void(int)>& func)
{
	for (int i = 0; i < a; i++) {
		func(i);
	}
}

void chifan(const std::function<void(int)>& f) {
	f(9);
}


int main() {

	std::string a = "****";
	std::string c = "$$$$";

	apple::print("luo");

	forloop(8, [&](int age) { std::cout << age << a  << c << std::endl; });

	chifan([](int p) { std::cout << p << std::endl; });

	std::cin.get();
}
