#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter the number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }

    return 0;
}