#include<iostream>

int convertChar(char c)
{
	c = std::toupper(c);
	int n;

	switch (c)
	{
	case 'I': n = 1; break;
	case 'V': n = 5; break;
	case 'X': n = 10; break;
	case 'L': n = 50; break;
	case 'C': n = 100; break;
	case 'D': n = 500; break;
	case 'M': n = 1000; break;
	default: n = 0; break;
	}

	return n;
}

int romanToInt(std::string roman)
{
	int digit = 0;
	int subtractor = 0;

	for (int i = 0; i < roman.size(); i++)
	{
		int holder = convertChar(roman.at(i));
		int nextHolder = 0;

		if (i != roman.size() - 1)
		{
			nextHolder = convertChar(roman.at(i + 1));
		}

		if (holder >= nextHolder && holder)
		{
			digit += (holder - subtractor);
			subtractor = 0;
		}
		else if (holder)
		{
			subtractor += holder;
		}
		else
		{
			return 0;
		}
	}
	return digit;
}

int main()
{
	while (true)
	{
		std::string romanNumeral;
		std::cin >> romanNumeral;

		if (romanToInt(romanNumeral) > 0)
		{
			std::cout << romanToInt(romanNumeral) << "\n\n";
		}
		else
		{
			std::cout << "Error!";
		}

		std::cin.ignore();
		std::cin.clear();
	}
}