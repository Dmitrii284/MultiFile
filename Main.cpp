#include <iostream>
#include "Funcshion.h"
#include "Structure.h"
#include "Date.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int n,m;
	//������� �������� � ��������� �����
	/*std::cout << "Insert tow namber ->";
	std::cin >> n >> m;
	std::cout << n << "+" << m << " = " << sum(n, m) << std::endl;
	hi();*/

	const int size = 10;
	int arr[size]{ 1, 2, 3 };
	print_arr(arr, size);
	person p1{
		"Tom Smith",
		20,
		"Programer",
		8000
	};
	_A = 5;
	print_person(p1);

	_A = 10;
	std::cout <<"_A = " << _A << std::endl;
	std::cout << "_PI = " << _PI << std::endl;
	std::cout << "_E = " << _E << std::endl;
	return 0;
}

// ������� ���������� ������������� ��������
// 1. ��������� ������;( ��������� ������)����� ���� ������� �� �������������� ��� ��� �� �����
// 2. ���������� ���� �� ������� ��� �������� ������ � ��������
// 3. �������� ����������� ���������
// 