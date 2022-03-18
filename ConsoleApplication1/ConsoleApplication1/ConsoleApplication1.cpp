#include <iostream>
#include <string>

using namespace std;

#define ERROR 404

struct hahaha {
    string first = "HIM";
    string second = "NAE";
    string third = "LA";
};

int main() {
    int e = ERROR;
    cout << e << endl;

    hahaha haha;
    cout << haha.first << haha.second << haha.third << endl;

    return 0;
}
