/*
Whenever we create some memory we need to delete some memory in that but when we don't do that memory leak happen

eg:- below code is example
*/

#include <iostream>

int main() {
  int n;
  std::cout<<"Enter the size of element : ";
  std::cin>>n;
  int ptr = new int[n]; // in c we have (int*)malloc(n*sizeof(int));

  // to free the memory
  delete ptr; // in cpp and free(ptr) in c
  return 0;
}
