#include "Structure.h"
#include <iostream>
//#include "Date.h"//#include "Date.h" Ошибка так как используется дублирование переменных

extern int _A; // Модификатор объявления
// указывающий на то что она уже объявлена в каколибо другом файле

void print_person(const person& P){
	std::cout << "Name:       " << P.name << std::endl;
		std::cout << "Age:       " << P.age << std::endl;
		std::cout << "Job:       " << P.job << std::endl;		
		std::cout << "Salary:       " << P.salary << std::endl;
		std::cout << "A = " << _A << std::endl;//Ошибка !! Так как iostream в нутри функции Structure уже подключен и
	//	тут он работает второй раз. Что вызывает ошибку!!!
}
