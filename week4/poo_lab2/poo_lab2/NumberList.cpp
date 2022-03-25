#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::Init()
{
    this->count = 0;
}

bool NumberList::Add(int x)
{
    if (this->count >= 10)
        return false;
    this->numbers[count++] = x;
}

void NumberList::Sort()
{
    int i,j,aux;
    for (i = 0; i < count - 1; i++)
        for (j = i; j < count; j++)
            if (numbers[i] > numbers[j])
            {
                aux        = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = aux;
            }

}

void NumberList::Print()
{
    int i;
    for (i = 0; i < count; i++)
        cout << numbers[i] << " ";
}
