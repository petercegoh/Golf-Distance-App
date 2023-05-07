#include <iostream>

using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    int d = 0;

    c = a;
    d = b;

    b = c;
    a = d;

    cout << a;
    cout << b;
    std::cout << "Hello World" << std::endl;
    return 0;   

}