#include <iostream>
#include <string>
#include <optional>
#include <variant>
#include <any>

void* operator new(size_t size) {
	std::cout << "malloc " << size << "bytes" << std::endl;
	return malloc(size);
}

int main() {
	/* optional*/


	std::string s = std::string("luo1234567899990");
	
	std::string_view sv(s.c_str()+1, 2);
	std::cout << sv << std::endl;
	std::cin.get();
}
