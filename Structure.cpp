#include "Structure.h"
#include <iostream>
//#include "Date.h"//#include "Date.h" ������ ��� ��� ������������ ������������ ����������

extern int _A; // ����������� ����������
// ����������� �� �� ��� ��� ��� ��������� � �������� ������ �����

void print_person(const person& P){
	std::cout << "Name:       " << P.name << std::endl;
		std::cout << "Age:       " << P.age << std::endl;
		std::cout << "Job:       " << P.job << std::endl;		
		std::cout << "Salary:       " << P.salary << std::endl;
		std::cout << "A = " << _A << std::endl;//������ !! ��� ��� iostream � ����� ������� Structure ��� ��������� �
	//	��� �� �������� ������ ���. ��� �������� ������!!!
}
