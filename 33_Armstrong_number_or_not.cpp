#include <iostream>
using namespace std;

int main()
{
    int n, m, r, sum = 0;
    cout << "Enter the number of your choice: " << endl;
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + (r * r * r);
    }
    if (m == sum)
    {
        cout << "It is an armstrong number" << endl;
    }
    else
    {
        cout << "It is not an armstrong number" << endl;
    }
}
