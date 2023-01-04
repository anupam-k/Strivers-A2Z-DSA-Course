# _Solve any Pattern Question - Trick Explained_

- For Patterns Questions, you must have a strong foundation of loops
- Patterns are not asked in Product Based Interviews
- But is plays a significant role when you are starting of your DSA Journey

## _Steps to Print any Pattern_
_(Most of the patterns will have Nested Loops)_
1. In the outer loop, connect the number of lines
2. In the inner loop, focus of the columns & connect them somewhere to the rows
3. Print the '*' inside the inner for loop
4. Observe symmetry  [Optional]


## _Pattern 1_
<b>

```
* * * *
* * * *
* * * *
* * * *
```
</b>

## _Steps_
```
1. For the Outer loop, count the number of lines: 4
2. For the Inner loop, there is also 4 number of stars ther same as row
3. Print the stars now, inside the inner for loop
```

## _Code_
<b>

```cpp
 int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
```
## _Explanation_
![Screenshot 2023-01-03 101755](https://user-images.githubusercontent.com/91872149/210301617-dcbdd196-158a-4d96-8852-374942a308bd.png)


</b>

## _Pattern 2_

<b>

```
* 
** 
*** 
****
*****
```

```cpp
for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
```
</b>

## _Pattern 3_

<b>

```
1
12
123
1234
12345
```

## _Code_

```cpp
   for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
     }
```

</b>




