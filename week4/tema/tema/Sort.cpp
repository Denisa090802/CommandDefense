#include "Sort.h"
#include <cstdarg>
#include <sstream>
#include <cstring>
#include <iostream>
using namespace std;
void Sort::swap(int* a, int* b)
{
    int aux = *a;
    *a      = *b;
    *b      = aux;
}
int Sort::partition(int *arr, int start, int end)
{
    int pivot = arr[start];

    int count = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // Giving pivot element its correct position
    int pivotIndex = start + count;
   int aux            = arr[pivotIndex];
    arr[pivotIndex] = arr[start];
    arr[start]      = aux;
  

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
          int  aux = arr[i++];
            arr[i++] = arr[j--];
            arr[j--] = aux;
       
        }
    }

    return pivotIndex;
}
void Sort::quickSort(int* arr, int start, int end, bool ascendent)
{
   
        if (ascendent ? start < end: start > end)
        {
            int pi = partition(arr, start, end);
            quickSort(arr, start, pi - 1, ascendent);
            quickSort(arr, pi + 1,end, ascendent);
        }
}
Sort::Sort(int number_of_elements, int min, int max)
{
    this->count = number_of_elements;
    this->lista = new int[number_of_elements];
    this->min   = min;
    this->max   = max;
}

Sort::Sort(Sort* initial_list)
{
    this->count = initial_list->count;
    this->lista = initial_list->lista;
    this->min   = initial_list->min;
    this->max   = initial_list->max;

}

Sort::Sort(int* vector, int n)
{
    this->count = n;
    if (n > 0)
    {
        this->min = vector[0];
        this->min = vector[0];
    }
    this->lista = new int[n];
    for (int i=0;i,n;i++)
    {
        this->lista[i] = vector[i];
        if (this->min > vector[i])
            this->min = vector[i];
        if (this->max < vector[i])
            this->max = vector[i];
    }
}

Sort::Sort(int n, ...)
{
    std::va_list args;
    va_start(args, n);
    this->count = n;
    int x;
    this->lista = new int[n];
    this->min   = 10000000;
    this->max   = -10000000;
    for (int i=0;i<n;i++)
    {
        x = va_arg(args, int);

        this->lista[i] = x;
        if (x < this->min)
            this->min = x;
        if (x > this->max)
            this->max = x;
    }

}

Sort::Sort( char* sir)
{
    int i             = 0;
    int string_length = strlen(sir);
    int n=1;
    for (int i=0; i<string_length;i++)
    {
        if (sir[i] == ',')
            n++;

    }
    this->lista = new int[n];
    this->count = n;
    char* p = strtok(sir, ",");
    while (p!=NULL)
    {
        
        this->min        = 10000000;
        this->max        = -10000000;

        int x = atoi(p);
        this->lista[i++] = x;
        if (x < this->min)
            this->min = x;
        if (x > this->max)
            this->max = x;

    }


}

void Sort::InsertSort(bool ascendent)
{
    int i, key, j;
    for (i = 1; i < this->count; i++)
    {
        key = this->lista[i];
        j   = i - 1;

        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && (ascendent ? this->lista[j] > key : this->lista[j] < key))
        {
            this->lista[j + 1] = this->lista[j];
            j          = j - 1;
        }
        this->lista[j + 1] = key;
    }
}

void Sort::QuickSort(bool ascendent)
{
    quickSort(this->lista, this->min, this->max, ascendent);
}

void Sort::BubbleSort(bool ascendent)
{
    int i, j;
    bool swapped;
    for (i = 0; i < this->count - 1; i++)
    {
        swapped = false;
        for (j = 0; j < this->count - i - 1; j++)
        {
            if (ascendent ? this->lista[j] > this->lista[j + 1] : this->lista[j] < this->lista[j + 1])
            {
                swap(&this->lista[j], &this->lista[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
    }
}

void Sort::Print()
{
    for (int i=0; i< this->count; i++)
    {
        cout << this->lista[i] << " ";
    }
    cout << endl;
}

int Sort::GetElementsCount()
{
    return this->count;
}

int Sort::GetElementFromIndex(int index)
{
    return this->lista[index];
}
