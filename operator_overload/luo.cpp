#include <iostream>
#include <string>

class Animal {
public:
	int head, leg;

	Animal(int x, int y): head(x), leg(y) {
		
	}
  //第一个const保护参数a，第二个const保护调用者比如dog
	Animal operator+(const Animal& a) const{
		return Animal(this->head + a.head, this->leg + a.leg);
	}

	Animal add(Animal b) {
		return Animal(this->head + b.head, this->leg + b.leg);
	}

};

int main() {

	Animal dog(1,4);

	Animal cat(1,4);

	Animal sum = dog.add(cat);

	Animal sum1 = dog + cat;

	std::cout << sum1.head << std::endl;

	std::cin.get();
}
