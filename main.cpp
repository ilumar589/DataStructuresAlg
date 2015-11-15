#include <iostream>
#include "headers/util/SortingUtil.h"
#include "headers/util/SwitchValues.hpp"

using namespace std;
using namespace sortingUtils;

int main() {
    cout << "Hello, World!" << endl;
    const int *a = new int(1);
    const int *b = new int(2);
    cout << "First value: " << *a << "; Second value: " << *b << endl;
    SwitchValues<int> :: switchCustomClasses(a,b);
    cout << "First value: " << *a << "; Second value: " << *b << endl;

    return 0;
}