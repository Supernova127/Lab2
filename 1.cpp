#include "funct.h"

using namespace Prog2;

int main(){	
	hero Zeus("THOR");
	while(true){
		int b;
		std::cout << "Нажмите 1 чтобы выполнение проверку с заданной сложностью \nнажмите 2 чтобы задать характеристику\nнажмите 3 чтобы посмотреть характеристику персонажа \nнажмите 4 чтобы выйти\n ";
		std::cin >> b;
	switch (b)
	{
	case 1 :
		int protection;
		std::cout << "Введите сложность  " << std::endl;
		std::cin >> protection;
		Zeus.attack(protection);
		break;
	case 2:
		int n;
		std::cout << "Введите характиристику мудрости героя " << std::endl;
		std::cin >> n;
		Zeus.set(n);
		Zeus.print();
		break;	
	case 3:
		Zeus.print();
		break;
	case 4:
		return 0;
	
	}
	

	
	
	}
	
	

}
