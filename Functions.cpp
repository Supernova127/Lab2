#include "Functions.h"

namespace Prog2 {
	std::string getNum() {
		std::string str;
		while (true) {
			std::cin >> str;
			if (std::cin.eof()) // обнаружен конец файла
				throw std::runtime_error("Не удалось прочитать строку EOF");
			else if (std::cin.bad()) // обнаружена невосстановимая ошибка входного потока
				throw std::runtime_error(std::string("Не удалось прочитать номер: "));
			// прочие ошибки (неправильный формат ввода) либо число не входит в заданный диапазон
			else if (std::cin.fail()) {
				std::cin.clear(); // очищаем флаги состояния потока
				// игнорируем все символы до конца строки
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Ошибка ввода. Повторите ввод " << std::endl;
			}
			else // успешный ввод
				return str;
		}
	}

	void NormalCheck(hero& Zeus) {
		int protection, i;
		std::cout << "Введите характеристику брони " << std::endl;
		protection = getNum<int>(0);
		i = Zeus.attack();
		if (i > protection) {
			std::cout << " Атака пробила защиту " << std::endl;
		}
		else {
			std::cout << " Атака не пробила защиту " << std::endl;
		}
	}

	void CheckAdvantage(hero& Zeus) {
		int protection, i, i1;
		std::cout << "Введите характеристику брони " << std::endl;
		protection = getNum<int>(0);
		i1 = Zeus.attack();
		i = Zeus.attack();
		if (i >= i1) {
			if (i > protection) {
				std::cout << protection << std::endl;
				std::cout << " Атака пробила защиту " << std::endl;
			}
			else {
				std::cout << protection << std::endl;
				std::cout << " Атака не пробила защиту " << std::endl;
			}
		}
		else if (i <= i1)
		{
			if (i1 > protection) {
				std::cout << " Атака пробила защиту " << std::endl;
			}
			else {
				std::cout << " Атака не пробила защиту " << std::endl;
			}
		}
	}

	void CheckInterference(hero& Zeus) {
		int protection, i, i1;
		std::cout << "Введите характеристику брони " << std::endl;
		protection = getNum<int>(0);
		i1 = Zeus.attack();
		i = Zeus.attack();
		if (i >= i1) {
			if (i1 > protection) {
				std::cout << protection << std::endl;
				std::cout << " Атака пробила защиту " << std::endl;
			}
			else {
				std::cout << protection << std::endl;
				std::cout << " Атака не пробила защиту " << std::endl;
			}
		}
		else if (i <= i1)
		{
			if (i > protection) {
				std::cout << " Атака пробила защиту " << std::endl;
			}
			else {
				std::cout << " Атака не пробила защиту " << std::endl;
			}
		}
	}

	void SetCharacteristic(hero& Zeus) {
		std::cout << "Введите число для увеличение характеристики " << std::endl;
		int n;
		n = getNum<int>(0);
		Zeus.set(n);
		Zeus.print();
	}

	Initialization Initializa() {
		Initialization pop;
		std::cout << "Введите Имя и характеристику атаки " << std::endl;
		pop.Name = getNum();
		pop.meaning = getNum<int>(0);
		return pop;
	}

	Initialization InitializaName() {
		Initialization pop;
		std::cout << "Введите Имя " << std::endl;
		pop.Name = getNum();
		return pop;
	}







}