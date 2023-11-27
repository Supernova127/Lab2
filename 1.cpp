#include <iostream>
#include <string>

class oil {
public:
	int age;
	std::string name;
	void print() {
		std::cout << age << "\n" << name << std::endl;
	}
};

int main(){
	 
	oil MI;
	MI.age;
	MI.name;
	std::cin >> MI.age;
	std::cin >> MI.name;
	MI.print();

	
	return 0;

}
