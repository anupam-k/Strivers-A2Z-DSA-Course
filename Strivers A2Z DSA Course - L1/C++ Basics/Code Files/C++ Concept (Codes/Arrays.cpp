#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10;
    cout << arr[3] << endl;

    arr[3] = 16;
    cout << arr[3];
    return 0;
}
// Input 3 4 5 7 10
// Output 17 16
