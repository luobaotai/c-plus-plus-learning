#include <iostream>
#include <vector>

struct Position {
	int x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Position& p) {
	stream << p.x << "," << p.y << "," << p.z << std::endl;
	return stream;
}

int main() {
	
	std::vector<Position> robotLine;

	robotLine.push_back({ 111,222,333 });
	robotLine.push_back({ 1,2,3 });

	std::cout << robotLine[0] << std::endl;

	std::cin.get();
}
