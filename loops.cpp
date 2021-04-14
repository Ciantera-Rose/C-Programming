#include <iostream>
#include <string>

using namespace std;

/* 
    WHILE LOOPS:
    A while statement is declared using the while keyword. When a while statement is executed, 
    the condition is evaluated. If the condition evaluates to true, the associated statement executes.
 */

// int main()
// {
//     int count = { 1 };
//     while (count <= 10)
//     {
//         cout << count << " ";
//         ++count;
//     }

//     cout << "done!" << endl;

//     return 0;
// 1 2 3 4 5 6 7 8 9 10 done!
// }

/* 
    FOR LOOPS:
    The for statement, aka for loop, is preferred when we have an obvious loop variable because it lets us
    easily and concisely define, initialize, test, and change the value of loop variables.
 */

int main(){
    for (int count = { 1 }; count <= 10; ++count)
    cout << count << " ";

    return 0;
    // 1 2 3 4 5 6 7 8 9 10 
}

int pow(int base, int exponent)
{
    int total = { 1 };
 
    for (int count = { 0 }; count < exponent; ++count)
        total *= base;
 
    return total;
}