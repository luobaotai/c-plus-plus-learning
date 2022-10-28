#include <iostream>
#include <string>

int main() {

	std::string name = "luobaotai";

	int s = name.size();

	/*传统写法
	const char* name = "luobaotai";
	*/
	
	std::cout << name << std::endl;
	std::cout << s << std::endl;

	std::cin.get();
}
