//SortType.h
#ifndef SORTTYPE_H
#define SORTTYPE_H
#include <iostream>
//enumeration
//ItemType Class
class SortType {
  //Public Members and Variables
  public:
  int *arraySort;
    SortType(int array);
    void print(int array[]);
    void reset();
    void initialize(int number);
    void insertSort();
    void quickSort();
    void mergeSort();
    //void insertItem(int pos, int array[], int lngth);
  //Private Members  
  private:
    
    int index;
    long cmprsnCount;
};
#endif