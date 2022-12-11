#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::string file("D:\\develop\\codelearn\\luo.txt");
	std::ifstream input(file);

	char buffer[1024];

	if (!input) {
		std::cout << "error" << std::endl;
	}
	while (!input.eof()) {
		input.getline(buffer, 1024);
		std::cout << buffer << std::endl;
	}
	std::cout << std::endl;
	
	std::cin.get();
}
