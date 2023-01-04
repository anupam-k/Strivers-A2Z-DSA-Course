#include <bits/stdc++.h>
using namespace std;

// Pass By Refernce
void doSomething(string &s)
{
    s[0] = 't';
    cout << s << endl;
}

int main()
{
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

// Output
// taj
// taj
