#include <iostream>
#include <vector>

struct Position {
	int x, y, z;

	Position(int a, int b, int c) : x(a), y(b), z(c) {
		std::cout << "not copy" << std::endl;
	}

	Position(const Position& p) : x(p.x), y(p.y), z(p.z) {
		std::cout << "copy" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Position& p) {
	stream << p.x << "," << p.y << "," << p.z << std::endl;
	return stream;
}

int main() {
	
	std::vector<Position> robotLine;

	robotLine.reserve(4); 
	robotLine.emplace_back(1,2,3);
	robotLine.emplace_back( 4,5,6 );
	robotLine.emplace_back( 7,8,9 );
	robotLine.emplace_back(10,11,12);

	std::cout << robotLine[0] << std::endl;

	std::cin.get();
}
