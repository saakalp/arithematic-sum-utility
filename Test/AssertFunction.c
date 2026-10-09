#include "Header.h" // test file

#include<assert.h>  // the function which is used for testing 
// if we want to run file no.16 so then 14,15 we dont need to specify it asser will do it becuse we i have maintion the name of header file 
int main()
{
   assert(Addition(10,11)== 21);
   assert(Addition(-10,20)== 10);
   assert(Addition(-10,-20)== -30);

  return  EXIT_FAILURE;
}