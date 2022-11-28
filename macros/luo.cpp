#include <iostream>
#include <string>

#define Log(x) std::cout << x << std::endl

#define Looper(x) for(int i = 0; i < x; i++)

int main() {

	Looper(6) {
		Log("loop");
	}

	Log(123);
	Log("luoyichen");
	std::cin.get();
}
