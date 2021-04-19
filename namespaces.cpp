#include <iostream>

// using namespace std;

/* 
      Namespaces in C++ :

    - ie: cout is located in the namespace std
    - A namespace is used as additional information to differentiate similar functions, 
      classes, variables etc. with the same name available in different libraries. Using 
      namespace, you can define the context in which names are defined. In essence, a namespace defines a scope.
    - Allows you to encapsulate functionality in a box with all of your functions in a namespace
      in which you have various namespaces with different functionality and separate your logic and functions
      even if they have the same names.
    - Will be helpful in EOS programming
 */

namespace myNamespace {
    void greetings()
    {
        std::cout << "Greetings from myNamesapce" << "\n";
    }
}

namespace yourNamespace {
    void greetings()
    {
        std::cout << "Greetings from your nameSpace" << std::endl;
    }
}

int main()
{
    myNamespace::greetings();
    yourNamespace::greetings();
    std::cout << "cout is located in the namespace std" << "\n";

    return 0;
}