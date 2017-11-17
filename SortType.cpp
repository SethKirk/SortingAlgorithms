//ItemType.cpp
#include <cstdlib>
#include "SortType.h"
//Constructor
SortType::SortType(int array){
  index = 0;
  cmprsnCount = 0;
  arraySort = new int[array];
}
//Sets the value variable to the number parameter
void SortType::initialize(int number){
  arraySort[index] = number;
  index++;
}
//Prints out the value variable
void SortType::print(int array[]){
  reset();
  while(index<15)
  {
    std::cout<<array[index]<<" ";
    index++; 
  }
}
void SortType::reset(){
  index = 0;
}
void SortType::insertSort(){
  int temp[sizeof(arraySort)];
  for(unsigned int i=0;i<sizeof(arraySort);i++)
  {
    for(unsigned int j=0;j<sizeof(temp);j++)
    {
      if(arraySort[i]>temp[j])
      {
        int tempVal = 0;
        for(unsigned int k=i+1;k<15;k++)
        {
          std::cout<<"k\n";
          tempVal = temp[k+1];
          temp[k+1]=temp[k];
        }
      }
    }
  }
  print(temp);  
}
void SortType::mergeSort(){
  int temp[sizeof(arraySort)];
}
void SortType::quickSort(){
  int temp[sizeof(arraySort)];
}