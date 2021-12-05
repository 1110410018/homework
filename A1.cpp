#include <iostream>

int main()
{
	for (int a = 1; a <= 10; a++)
	{
		for (int b = 1; b <= a; b++) std::cout << "*";
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int a = 1; a <= 10; a++)
	{
		for (int b = 10; b >= a; b--) std::cout << "*";
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int a = 1; a <= 10; a++)
	{
		for (int c = 10; c > a; c--) std::cout << " ";
		for (int b = 1; b <= a; b++) std::cout << "*";
		std::cout << "\n";
	}
	std::cout << "\n";
	for (int a = 1; a <= 10; a++)
	{
		for (int c = 1; c < a; c++) std::cout << " ";
		for (int b = 10; b >= a; b--) std::cout << "*";
		std::cout << "\n";
	}
	std::cout << "\n";
	//上面是三角形
	for (int b = 1; b <= 9; b++)
	{
		for (int a = 1; a <= b; a++)
		{
			std::cout << a << "*" << b << "=";
			if (a * b < 10) std::cout << " ";
			std::cout << a * b << " ";
		}
		std::cout << "\n";
	}
}