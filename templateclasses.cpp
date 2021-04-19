#include <iostream>

using namespace std;

/* 
    TEMPLATE CLASSES & TYPEDEF:
    - 
 */

template <class T>
class MathTools {
    public:
    T multiply(T a, T b)
    {
        return a*b;
    }
    T divide(T a, T b)
    {
        return a/b;
    }
    T add(T a, T b)
    {
        return a+b;
    }
    T suntract(T a, T b)
    {
        return a-b;
    }
};


typedef MathTools<int> IntTools;
typedef MathTools<double> doubleTools;

int main()
{
    IntTools intMathTools;
    doubleTools doubleMathTools;

    cout << intMathTools.add(3,2) << endl;
    cout << doubleMathTools.divide(10.5,5.5) << endl;

    return 0;
}
/* 
    5
    1.90909
 */