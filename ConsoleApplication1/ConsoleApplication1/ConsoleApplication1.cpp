#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "더하기" << endl;

    int a = 10;
    int b = 20;

    cout << a + b << endl;

    cout << "구구단" << endl;
    int i, j;
    int gugudan;

    for(int i = 1; j < 10; j++)
    {
        for (int i = 1; i < 10; i++)
        {
            gugudan = i * j;
            cout << i << "X" << j << "=" << gugudan << endl;
        }
    }

}