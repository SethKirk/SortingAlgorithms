//ItemType.cpp
#include <cstdlib>
#include <math.h>
#include "SortType.h"
//Constructor
SortType::SortType(int l, int array[]){
  index=0;
  cmprsnCount=0;
  length=l;
  arraySort = new int[length];
  for(int i=0;i<length;i++)
  {
    arraySort[i] = array[i];
  }
  temp = new int[length];
  for(int j=0;j<length;j++)
  {
    temp[j] = arraySort[j];
  }
}
SortType::~SortType(){
  delete arraySort;
  delete temp;
}
//Prints out the value variable
void SortType::print(){
  index=0;
  while(index<length)
  {
    std::cout<<arraySort[index]<<" ";
    index++; 
  }
  std::cout<<"\nTotal # Comparisons: "<<cmprsnCount<<"\n";
  cmprsnCount=0;
}
//Sets the ordered array back to the unordered, original version
void SortType::reset(){
  for(int i=0;i<length;i++)
  {
    arraySort[i] = temp[i];
  }
}
//Insertion Sort Algorithm
void SortType::insertSort(){
  int i,j;
  int key;
  for(i=1;i<length ;i++)
  {
    key = arraySort[i];
    j=i-1;
    while(j>=0 && arraySort[j]>key)
    {
      arraySort[j+1] = arraySort[j];
      j=j-1;
      cmprsnCount++;
    }
    cmprsnCount++;
    arraySort[j+1] = key;
   }  
}
//Recursive Merge Sort Algorithm
void SortType::mergeSort(int lo, int hi){
  int mid;
  if(lo<hi) 
  {
    mid=(lo+(hi-lo)/2);
    mergeSort(lo,mid);
    mergeSort(mid+1,hi);
    mergeArray(lo,mid,mid+1,hi);
    cmprsnCount++;
  } 
}
//Function That merges the two subarrays
void SortType::mergeArray(int lo, int mid, int mid2, int hi){
  int *tmp;
  tmp = new int[length];
  int i=lo;
  int j=lo;
  while(lo<=mid && mid2<=hi)
  {
    if(arraySort[lo]<arraySort[mid2])
    {
      tmp[i] = arraySort[lo];
      lo++;
    }
    else
    {
      tmp[i] = arraySort[mid2];
      mid2++;
    }
    i++;
    //cmprsnCount++;
  }
  while(lo<=mid)
  {
    tmp[i] = arraySort[lo];
    lo++;
    i++;
    cmprsnCount++;
  }
  while(mid2<=hi)
  {
    tmp[i] = arraySort[mid2];
    mid2++;
    i++;
    cmprsnCount++;
  }
  for(i=j;i<=hi;i++)
  {
    arraySort[i] = tmp[i];
  } 
  delete tmp;
}
void SortType::swap(int* a, int* b){
  int temp = *a;
  *a = *b;
  *b = temp;
}
int SortType::partition(int low, int high){
  int pivot = arraySort[high]; 
  int i = (low - 1);
 
  for (int j = low; j <= high- 1; j++)
    {
      cmprsnCount++;
      if (arraySort[j] <= pivot)
        {
	  cmprsnCount++;
	  i++;  
	  swap(&arraySort[i],&arraySort[j]);
        }
    }
  swap(&arraySort[i + 1], &arraySort[high]);
  return (i + 1);
}
void SortType::quickSort(int low, int high){
  if (low < high)
    {
      cmprsnCount++;
      int div = partition(low, high);
      quickSort(low, div - 1);
      quickSort(div + 1, high);
    }
}
