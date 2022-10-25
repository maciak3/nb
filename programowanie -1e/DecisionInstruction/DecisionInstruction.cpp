#include <iostream>
/*

DRY - don't repeat yourself - nie powtarzaj sie

*/



/*
Napisz funkcję która wczyta dwie liczby
i wykona dzielenia na nich

*/

void task1()

	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe pierwsza" << "\n";
	std::cin >> firstNumber;

		std::cout << "Podaj druga pierwsza" << "\n";
	std::cin >> secondNumber;

		// iloraz;
		int quotient;

		if (secondNumber !=0)
	quotient = firstNumber / secondNumber;

		if (secondNumber != 0)
	std::cout << "iloraz:" << quotient << "\n";

		if (secondNumber != = 0)
		std::cout << "dzielenie przez zero !!! \n";
		{
		else /*w przeciwnym*/
		}


}




int main()
{
	task1();

}