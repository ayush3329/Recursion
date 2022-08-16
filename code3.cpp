#include <iostream>
using namespace std;

int sum(int a)
{

    if (a == 10)
    {
        return a;
    }
    sum(10); 
}

int main()
{
    cout << sum(1);

    return 0;
}