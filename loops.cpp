#include <iostream>
#include <string>

using namespace std;

/* 
    WHILE LOOPS:
    A while statement is declared using the while keyword. When a while statement is executed, 
    the condition is evaluated. If the condition evaluates to true, the associated statement executes.
 */


/* 
int main()
{
    int count = { 1 };
    while (count <= 10)
    {
        cout << count << " ";
        ++count;
    }

    cout << "done!" << endl;

    return 0;
    //1 2 3 4 5 6 7 8 9 10 done!
}
 */


/*    
    FOR LOOPS:
    The for statement, aka for loop, is preferred when we have an obvious loop variable because it lets us
    easily and concisely define, initialize, test, and change the value of loop variables.
 */

/* 
int main(){
    for (int count = { 1 }; count <= 10; ++count)
    cout << count << " ";

    return 0;
    // 1 2 3 4 5 6 7 8 9 10 
}
 */


int main() {
    int numberOfCars = 3;
    int carMiles[] = {15, 22, 17};

    // total number of miles car have traveled together
    int totalMiles = 0;
    for(int counter = 0; counter < numberOfCars; ++counter){

        cout << "Adding " << carMiles[counter] << " to totalMiles" << endl;
        totalMiles += carMiles[counter];
        cout << "Total Miles is currently: " << + " " << totalMiles << endl;
    }
    return 0;
}
/* 
OUPUT: 
Adding 15 to totalMiles
Total Miles is currently:  15
Adding 22 to totalMiles
Total Miles is currently:  37
Adding 17 to totalMiles
Total Miles is currently:  54
 */