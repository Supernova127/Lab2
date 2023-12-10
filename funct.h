#ifndef OOPPROG2_CIRCLE_H
#define OOPPROG2_CIRCLE_H

#include <iostream>
#include <string>
#include <ctime>
#include <string>

namespace Prog2 {

	class hero {
	private:
		std::string name;
		int complexity;
		int wisdom;
	public:
		hero(std::string valueName) {
			name =valueName;
			wisdom = 0;
			complexity = 0;
		}
		hero(std::string valueName, int valuewisdom) {
			name = valueName;
			wisdom = valuewisdom;
			complexity = 0;
		}
		int get() {

			return this->wisdom;
		}
		void set(int x) {

			wisdom = x;

		}
		void print() {
			std::cout << "Имя персонажа "<<name << std::endl;
			std::cout << "мудрость =" << wisdom << std::endl;
		}
		void attack(int protection) {
			srand(time(NULL));
			int D20=rand()%19+1;
			wisdom = wisdom + D20;
			complexity = protection;
			D20 = 1;
			std::cout << "Д20 " << D20 << std::endl;
			if (wisdom > complexity || D20 == 20 && D20 != 1) {
				std::cout << " Аттака пробила зашиту " << std::endl;
			}
			else {
				std::cout << " Аттака не пробила зашиту" << std::endl;
			}
			
		}

	};












}




#endif //OOPPROG2_CIRCLE_H