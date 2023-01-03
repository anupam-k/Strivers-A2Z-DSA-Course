#include <bits/stdc++.h>
using namespace std;

int minn(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int minimum = minn(num1, num2);
    cout << "Minimum: " << minimum << endl;
    return 0;
}