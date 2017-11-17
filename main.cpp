//main.cpp
#include <fstream>
#include <iostream>
#include "SortType.h"
//main function
int main(int argc, char *argv[]){
  bool run = true;
  char cinput;
  int input;
  //Open File
  std::fstream fs;
  fs.open(argv[1],std::fstream::in);
  //Read Input From File
  if(fs.is_open())
  {
    SortType sort(999999);
    fs>>input;
    while(!fs.eof())
    {
      sort.initialize(input);
      fs>>input;
    } 
    sort.print(sort.arraySort);
    std::cout<<"init\n";
    sort.reset();
     //User Command Input
    while(run)
    { 
      std::cout<<"Enter A Sorting Algorithm: ";
      std::cin>>cinput;
      switch(cinput)
      {
        //Insert
        case 'i':
          sort.insertSort();
          std::cout<<"sorted\n";
          break;
        //Delete  
        case 'm':
          break;
        case 'q':
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
 