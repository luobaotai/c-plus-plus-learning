#include <iostream>

class String {
public:
    String() = default;

    String(const char* string) {
        std::cout << "Created!\n";
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    String(const String& other) {
        std::cout << "Copied!\n";
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    
    String(String&& other) noexcept {
        std::cout << "Moved!\n";
        m_Size = other.m_Size;
        m_Data = other.m_Data;
        other.m_Data = nullptr;
        other.m_Size = 0;
    }

    String& operator=(String& other) {
        printf("copy = operator\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
        return *this;
    }

    String& operator=(String&& other) noexcept {
        printf("Moved = operator\n");
        if (this != &other) {
            delete[] m_Data;

            m_Size = other.m_Size;
            m_Data = other.m_Data;

            other.m_Data = nullptr;
            other.m_Size = 0;
        }
        return *this;
    }

    ~String() {
        std::cout << "Destroyed!\n";
        delete[] m_Data;
    }

    void Print() {
        for (uint32_t i = 0; i < m_Size; ++i)
            printf("%c", m_Data[i]);

        printf("\n");
    }
private:
    char* m_Data;
    uint32_t m_Size;
};




class Animal {
private:
    String name;
public:
	Animal(const String& a) : name(a) {
        std::cout << "Animal copy!\n";
	}

	Animal(String&& a) noexcept
		: name((String&&)a)
	{
        std::cout << "Animal move!\n";
	}

	~Animal() {
	}

    void PrintName() {
        name.Print();
    }
};

int main() {
    //移动构造器
	Animal dog("aniu");
    
    //移动赋值语句
    String apple = "123456";
    String orange;
    printf("apple: ");
    apple.Print();
    printf("orange: ");
    orange.Print();

    orange = std::move(apple);

    printf("apple: ");
    apple.Print();
    printf("orange: ");
    orange.Print();
    
    

	std::cin.get();
}
