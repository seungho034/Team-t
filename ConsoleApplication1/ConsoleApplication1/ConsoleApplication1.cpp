#include <iostream>
#include <fstream>
#include <string>
#include <string>

using namespace std;

template <typename T>
void Swap(T& lhs, T& rhs)
{
	const T temp = std::move(lhs);
	lhs = std::move(rhs);
	rhs = std::move(temp);
}

int main()
{
	int a = 10, b = 20;
	printf("이전 : (%d, %d)\n", a, b);

	Swap(a, b);
	printf("이후 : (%d, %d)\n", a, b);

	return 0;
}