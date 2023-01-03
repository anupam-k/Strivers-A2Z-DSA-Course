#include <bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> which does not return aything
// return
// paramaterised
// non paramaterised

// void function example
void printName()
{
    cout << "hey Striverr!";
}

// paramaterised function example
void paraprintName(string name)
{
    cout << "hey Striverr! Name: " << name << endl;
}

int main()
{
    string name;
    cin >> name;
    printName();
    cout << endl;
    paraprintName(name); // void function

    string name2;
    cin >> name2;
    paraprintName(name2);
    return 0;
}