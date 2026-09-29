#include <iostream>
#include <string>
#include <windows.h>

std::string intToRoman(int number)
{
	if (number < 1 || number > 3999)
		return "поза межами (1-3999)";

	const int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	const char* symbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	std::string result;
	for (int i = 0; i < 13; ++i)
	{
		while (number >= values[i])
		{
			result += symbols[i];
			number -= values[i];
		}
	}
	return result;
}

int main()
{
	SetConsoleOutputCP(1251);
	std::cout << "Конвертер римських чисел\n";
	std::cout << "2026 = " << intToRoman(2026) << "\n";
	std::cout << "4000 = " << intToRoman(4000) << "\n";
	return 0;
}