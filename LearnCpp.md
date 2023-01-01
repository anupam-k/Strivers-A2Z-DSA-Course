## _Data Types:_    
- int, long, long long,  float, double
- string and getline
- char - 256 charecter in english

##  _Q. Write a program that takes an input age and prints if you are an adult or not_
  `>=18, yes`
  `< 18, no`

<b>

```cpp
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
```

## _A school has following rules for grading system:_
   - a. Below 25 - F
   - b. 25 to 44 - E
   - c. 45 to 49 - D
   - d. 50 to 59 - C
   - e. 60 to 79 - B
   - f. 80 to 100 - A
     Ask user to enter marks and print thr corresponding grade.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks <= 44)
    {
        cout << "E";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }

    return 0;
}
```

  </b>
