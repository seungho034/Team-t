// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>

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