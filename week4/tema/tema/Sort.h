#pragma once

class Sort

{
  private:
    void swap(int* a, int* b);
    int partition(int *arr, int start, int end);
    void quickSort(int* arr, int start, int end, bool ascendent);
    
    int* lista;
    int min, max;
    int count;
  public:
    Sort(int number_of_elements, int min, int max);
    Sort(Sort * initial_list);
    Sort(int* vector, int n);
    Sort(int n, ...);
    Sort(char* sir);

    void InsertSort(bool ascendent = false);

    void QuickSort(bool ascendent = false);

    void BubbleSort(bool ascendent = false);

    void Print();

    int GetElementsCount();

    int GetElementFromIndex(int index);
};