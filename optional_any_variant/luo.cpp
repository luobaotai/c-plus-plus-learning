#include <iostream>
#include <string>
#include <optional>
#include <variant>
#include <any>

std::optional<std::string> func(char a) {
	if (a == 'A') {
		return std::string("luobaotai");
	}
	else {
		return {};
	}
}

std::any unknownFunc(int a) {
	switch (a) {
	case 0:
		return 2;
		break;
	case 1:
		return std::string("luo");
		break;
	case 2:
		return 3.3f;
		break;
	default:
		break;
	}
}

int main() {
	/* optional*/
	std::optional<std::string> luo = func('a');
	
	if (luo) {
		std::cout << luo.value() << std::endl;
	}
	else {
		std::cout << "error" << std::endl;
	}
	/*******************************************/

	/*variant*/
	std::variant<std::string,int, double>  var;
	var = std::string("luobaotai");
	var = 56;
	var = 56.7;

	/*******************************************/

	/*any, 如果不知道要接收什么类型的数据，那么就用any类型的变量来接收*/
	std::any gao;
	gao = unknownFunc(5);
	gao = 6.6;

	std::cin.get();
}
