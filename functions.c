#include "functions.h"

int prime(unsigned long long int x)
{
	for (unsigned long long int i = 2; i * i <= x; i++)
		if (x % i == 0) return 0;
	return 1;
}

bool IsPalindrome(const unsigned int number_)
{
	unsigned int original = number_;
	unsigned int reverse = 0;
	while (original > 0)
	{
		unsigned char d = original % 10;
		reverse = reverse * 10 + d;
		original /= 10;
	} 
		
	return number_ == reverse;
}
