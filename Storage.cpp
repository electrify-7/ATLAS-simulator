#include <iostream>
#include <vector>
#include "Headerfile.h"

std::vector<std::string> Storage_input;

void Storage(std::string a)
{
  
   Storage_input.push_back(a);
   
}

bool Storage_check(std::string a)
{
  
 Capitalizing(a);
 int i=0;
 for(i=0;i< Storage_input.size(); i++)
 {
   if(a == Storage_input[i])
   return 1;

 }

 return 0;


}