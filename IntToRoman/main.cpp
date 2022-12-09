#include<iostream>

std::string roman = "";

void checkM(int& n)
{
	while (n >= 1000)
	{
		n -= 1000;
		roman.push_back('M');
	}
}

void checkD(int&)
{

}

std::string intToRoman(int n)
{
	
}

int main()
{

}