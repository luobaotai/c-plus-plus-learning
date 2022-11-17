#include <iostream>

class String {
public:
	char* name;
	unsigned int size;


	String(const char* s) {
		size = strlen(s);
		name = new char[size];
		memcpy(name, s, size);
	}

	String(const String& s) {
		size = s.size;
		name = new char[size];
		memcpy(name, s.name, size);
	}

	~String() {
		delete[] name;
	}

	const char* getName() {
		return name;
	}

};

struct Entity {
	int x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const String& s) {
	stream << s.name;
	return stream;
}

int main() {

	int a = (int)&((Entity*)nullptr)->z;

	String s1("luo");
	String s2 = s1;

	std::cout << s1 << std::endl;

	std::cin.get();
}
