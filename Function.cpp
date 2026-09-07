#include <iostream>
using namespace std;

int Sum(int n)
{
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }

    return s;
}

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    cout << "Sum is :" << Sum(n);
    return 0;
}