//
// Created by WolframAlpha on 15/11/2015.
//

#ifndef DATASTRUCTURES_SORTINGUTIL_H
#define DATASTRUCTURES_SORTINGUTIL_H

namespace sortingUtils
{
    template <class T>
    class SwitchValues
    {
    public:
        static void switchCustomClasses(const T*& classA, const T*& classB);
        static void switchInteger(int& a, int& b);

        // to add if necessary other types to be
    };

}

#endif //DATASTRUCTURES_SORTINGUTIL_H
