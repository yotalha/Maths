#include "Math.h"

void Math::Display(int num)
{
	cout << num << endl;
}

int Math::Multiply(int a, int b)
{

	return a * b;
}

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Subtract(int a, int b)
{
	return a - b;
}

float Math::Divide(int a, int b)
{
	return a / b;
}


int main()
{
	Math solution;
	int d= Divide(10,20);
	int mul = solution.Multiply(5, 6);
	int div = solution.Divide(6, 2);
	solution.Display(mul);
	solution.Display(div);
}
