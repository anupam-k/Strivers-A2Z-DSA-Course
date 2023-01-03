/**
Q. Write a program that takes an input age and prints if you are an adult or not
>=18, yes < 18, no
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You're an adult now";
    }
    else if (age < 18)
    {
        cout << "Not an adult";
    }
    return 0;
}