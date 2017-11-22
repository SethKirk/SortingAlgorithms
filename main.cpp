//main.cpp
#include <iostream>
#include <iterator>
#include <istream>
#include <fstream>
#include "SortType.h"
//main function
int main(int argc, char *argv[]){
  bool run = true;
  char cinput;
  const int ARRAY_LENGTH = 10000;
  int arr[ARRAY_LENGTH];
  //Open File
  std::ifstream fs;
  fs.open(argv[1]);
  //Read Input From File
  if(fs.is_open())
  {
    int cnt = 0;
    while(cnt<ARRAY_LENGTH && fs>>arr[cnt])
    {
      cnt++;
    }
    fs.close();
    SortType sort(cnt,arr);
    //User Command Input
    while(run)
    { 
      std::cout<<"Enter A Sorting Algorithm: ";
      std::cin>>cinput;
      switch(cinput)
      {
        //Insert
        case 'i':
          std::cout<<"Insertion Sort: ";
          sort.insertSort();
          sort.print();
          sort.reset();
          break;
        //Merge  
        case 'm':
          std::cout<<"Merge Sort: ";
          sort.mergeSort(0,cnt-1);
          sort.print();
          sort.reset();
          break;
        //Quick  
        case 'q':
          std::cout<<"Quick Sort: ";
          sort.quickSort(0, cnt-1);
	  sort.print();
          sort.reset();
          break; 
        //Exit   
        case 'e':
          std::cout<<"Quiting....\n";
          run = false;
          break;  
        default:
          std::cout<<"User Input Not Recognized. Try Again."<<std::endl;   
      }
    }
    return 0;
  }
  else
  {
    std::cout<<"File could not be opened."<<"Please Try Again"<<std::endl;
    return 0;
  }
}
 
