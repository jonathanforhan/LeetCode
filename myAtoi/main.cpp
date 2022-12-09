#include<iostream>
#include<string>

using std::string;

#define log(x) std::cout << x << '\n';

bool pos{ 0 };
bool neg{ 0 };

void checker(string& s, int& i) {
	while (true) {
		if (s[i] == ' ') {
			i++;
		}
		else if (s[i] == '+') {
			pos = true; i++; break;
		}
		else if (s[i] == '-') {
			neg = true; i++; break;
		}
		else if (s[i] >= '0' && s[i] <= '9') {
			pos = true; break;
		}
		else {
			log("String Error"); break;
		}
	}
}

int adder(string& s, int& i) {
	long n{ 0 };
	while (s[i] >= '0' && s[i] <= '9') {
		n *= 10;
		if (pos) {
			n += s[i] - '0';
		}
		else if (neg) {
			n -= s[i] - '0';
		}
		if (n > INT_MAX) {
			n = INT_MAX; break;
		}
		else if (n < INT_MIN) {
			n = INT_MIN; break;
		}
		i++;
	}
	return static_cast<int>(n);
}

int32_t myAtoi(string& s) {
	int i{ 0 };
	checker(s, i);
	return adder(s, i);
}

int main() {
	string s = "         +83735";
	log(myAtoi(s));
}