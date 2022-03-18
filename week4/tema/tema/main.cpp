#include <iostream>
#include "Sort.h"
using namespace std;
int main()
{
    Sort s(10, 4, 92, 8, 7, 15, 67, 55, 63, 21, 77);
    s.Print();
    s.BubbleSort();
    s.Print();
    s.InsertSort(true);
    s.Print();
    return 0;
}
