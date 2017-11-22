//SortType.h
#ifndef SORTTYPE_H
#define SORTTYPE_H
#include <iostream>
//enumeration
//ItemType Class
class SortType {
  //Public Members and Variables
  public:
    SortType(int l, int array[]);
    ~SortType();
    void print();
    void reset();
    void insertSort();
    void quickSort(int low, int high);
    void mergeSort(int lft, int rght);
    void mergeArray(int lft, int mid, int mid2, int rght);
    void swap(int* a, int* b);
    int partition(int low, int high);
  //Private Members  
  private:
    int index;
    int length;
    long cmprsnCount;
    int *arraySort;
    int *temp;
};
#endif
