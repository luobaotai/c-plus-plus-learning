#include <iostream>
#include <string>
#include <memory>

class Animal {
public:
	int age;

	Animal(): age(3) {
		std::cout << "create animal" << std::endl;
	}

	~Animal()  {
		std::cout << "destroy animal" << std::endl;
	}

	void print() {
		std::cout << "animal test" << std::endl;
	}

};

int main() {
	//单例指针
	{ 
		std::unique_ptr<Animal> dog = std::make_unique<Animal>();
		//dog不能分享给cat，因为是单例指针类
		//std::unique_ptr<Animal> cat = dog;
	}

	//共享指针，堆里面的对象一共有两次引用，只有两次引用的局部变量全都消失，才会释放该内存
	{
		std::shared_ptr<Animal> cat;
		{
			std::shared_ptr<Animal> dog = std::make_shared<Animal>();
			cat = dog;
			//cat，dog指向同一个地址，所以修改任意一个，另一个就会一起变化
			dog.get()->age = 99;
			std::cout << cat.get()->age << std::endl;
		}
	}

	//弱指针，堆里面的对象一共有一次引用，弱指针不增加引用次数，当共享指针消失，就会释放该内存
	{
		std::weak_ptr<Animal> cat;
		{
			std::shared_ptr<Animal> dog = std::make_shared<Animal>();
			cat = dog;
		}
	}

	
	std::cin.get();
}
