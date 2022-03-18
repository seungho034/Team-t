#include <iostream>
#include <string>

using namespace std;

#define ERROR 404

struct hahaha {
    string first = "HIM";
    string second = "NAE";
    string third = "LA";
};

template <typename T>
void Swap(T& lhs, T& rhs)
{
	const T temp = std::move(lhs);
	lhs = std::move(rhs);
	rhs = std::move(temp);
}

int main()
{
  
    	int e = ERROR;
    	cout << e << endl;

    	hahaha haha;
	
    	cout << haha.first << haha.second << haha.third << endl;
  
  
	int a = 10, b = 20;
	printf("이전 : (%d, %d)\n", a, b);

	Swap(a, b);
	printf("이후 : (%d, %d)\n", a, b);

	return 0;
}
