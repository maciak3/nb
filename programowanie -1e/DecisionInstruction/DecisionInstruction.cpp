#include <iostream>

/*
DRY - don't repeat yourself - nie powtarzaj się
*/

/*
Operatory porównania:
* równości				==
* różności				!=
* większości			>
* mniejszości			<
* większe lub równe		>=
* mniejsze lub równe	<=
argument1 >= argument2
Wynikiem działania tych operatorów
jest wartość logiczna true/false typu bool
bool zmienna = true;
bool zmienna2 = 5 > 74;
*/

/*
Napisz funkcję, któa wczyta dwie liczby i wykona dzielenie na nich
*/
void task1()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;

	std::cout << "Podaj druga liczbe (nie podawaj zera):\n";
	std::cin >> secondNumber;

	//iloraz
	int quotient = 0;

	/*if (secondNumber != 0)
		quotient = firstNumber / secondNumber;
	if (secondNumber != 0)
		std::cout << "Iloraz: " << quotient << "\n";
	if (secondNumber == 0)
		std::cout << "Dzielenie przez zero!!!!\n";*/

	if (secondNumber != 0)
	{
		quotient = firstNumber / secondNumber;
		std::cout << "Iloraz: " << quotient << "\n";
	}
	else
	{
		std::cout << "Dzielenie przez zero!!!!\n";
	}

	std::cout << "Koniec programu\n";
}

/*
Napisz funkjcę, która wczyta liczbę i wyświetli informację
czy jest ona dodatnia czy nie.
*/
void task2()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;

	if (numberToCheck > 0)
		std::cout << "Liczba większa od zera\n";
	else
		std::cout << "Liczba równa lub mniejsza od zera\n";
}

/*
Napisz funkcję, która wczyta liczbę i wyświetli informację
czy jest ona w zakresie <10, 25>.
*/
void task3()
{
	int numberToCheck;

	std::cout << "Podaj liczbe do sprawdzenia:\n";
	std::cin >> numberToCheck;
	{
		if (numberToCheck >= 10


			if (numberToCheck <= 25)
				std::cout << "Liczba jest w zakresie";
			else
				std::cout << "Liczba nie jest w zakresie";

	}
  else

std::cout << "liczba nie spewnia warunek";
}
int main()
{
	//task1();
	//task2();
	task3();
}