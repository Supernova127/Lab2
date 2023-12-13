#include "Functions.h"

using namespace Prog2;

int main(){	
	srand(time(NULL));
	
	try
	{
		Initialization pop = Initializa();
		hero Zeus(pop.Name,pop.meaning);
		while (true) {
			
			std::cout << 
				"Нажмите 1 чтобы выполнить проверку \n"
				"Нажмите 2 чтобы выполнить \n"
				"Нажмите 3 чтобы выполнить \n"
				"Нажмите 4 чтобы увеличить характеристику\n"
				"Нажмите 5 чтобы посмотреть характеристику персонажа\n"
				"Нажмите 6 чтобы инициализировать имя и значение характеристики\n"
				"Нажмите 7 чтобы инициализировать имя\n"
				"Нажмите 8 чтобы выйти" << std::endl;
			int b;
			b=getNum<int>(0);
			switch (b)
			{
			case 1:
				int b1;
				std::cout <<"Нажмите 1 чтобы выполнить обычную проверку \n" 
							"Нажмите 2 чтобы выполнить проверку с преимуществом \n"
							"Нажмите 3 чтобы выполнить проверку с помехой \n"<< std::endl;
				b1 = getNum<int>(0);
				switch (b1)
				{
				case 1:
					NormalCheck(Zeus);
					break;
				case 2:
					CheckAdvantage(Zeus);
					break;
				case 3:
					CheckInterference(Zeus);
					break;
				}
				
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				SetCharacteristic(Zeus);				
				break;
			case 5:
				Zeus.print();
				break;
			case 6:				
				pop = Initializa();
				Zeus = hero(pop.Name, pop.meaning);				
				break;
			case 7:
				pop = InitializaName();
				Zeus = hero (pop.Name);
				break;
			case 8:
				return 0;

			}

		}
	}
	catch (const std::exception& re)
	{
		std::cerr << re.what() << std::endl;

		return 1;
	}

	
	
	

}
