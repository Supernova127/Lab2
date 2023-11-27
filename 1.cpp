#include <iostream>
#include <string>

class oil {
public:
	int age;
	std::string name;
};

int main(){
	 
	oil MI;
	MI.age = 19;
	MI.name = "Нариман";


	std::cout << MI.age << "\n" << MI.name << std::endl;
	return 0;

}
