#ifndef OOPPROG2_CIRCLE_H
#define OOPPROG2_CIRCLE_H

#include <iostream>
#include <string>
#include <ctime>
#include <string>

namespace Prog2 {
	struct Initialization
	{
		std::string Name;
		int meaning;

	};

	template<class T>
	T getNum(T min = std::numeric_limits<T>::lowest(), T max = std::numeric_limits<T>::max()) {
		T a;
		while (true) {
			std::cin >> a;
			if (std::cin.eof()) // обнаружен конец файла
				throw std::runtime_error("Не удалось прочитать номер EOF");
			else if (std::cin.bad()) // обнаружена невосстановимая ошибка входного потока
				throw std::runtime_error(std::string("Не удалось прочитать номер: "));
			// прочие ошибки (неправильный формат ввода) либо число не входит в заданный диапазон
			else if (std::cin.fail() || a < min || a > max) {
				std::cin.clear(); // очищаем флаги состояния потока
				// игнорируем все символы до конца строки
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Ошибка ввода. Повторите ввод " << std::endl;
			}
			else // успешный ввод
				return a;
		}
	}

	std::string getNum();

	class hero {
	private:
		std::string name;
		int complexity;
		int wisdom;
	public:
		hero(std::string valueName) {
			name = valueName;
			wisdom = 0;
			complexity = 0;
		}
		hero(std::string valueName, int valuewisdom) {
			name = valueName;
			wisdom = valuewisdom;
			complexity = 0;
		}

		int get()const{

			return this->wisdom;
		}
		void set(int x) {

			wisdom +=x;

		}
		void print() {
			std::cout << "Имя персонажа " << name << std::endl;
			std::cout << "сила атаки =" << wisdom << std::endl;
		}
		int attack()const {
			int valuewisdom;
			int D20 = rand() % 19 + 1;
			std::cout << "D20 " << D20 << std::endl;
			valuewisdom = wisdom + D20;
			
		
			return valuewisdom;

		}

	};

	void NormalCheck(hero& Zeus);
	void CheckAdvantage(hero& Zeus);
	void CheckInterference(hero& Zeus);
	void SetCharacteristic(hero& Zeus);
	Initialization Initializa();
	Initialization InitializaName();


}




#endif //OOPPROG2_CIRCLE_H