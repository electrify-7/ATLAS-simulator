#include <iostream>
#include "Headerfile.h"
#include <fstream>


bool Validate(std::string& b)
{
   std::ifstream country_check("filing.txt");
   std::string country_string;
   

  while (std::getline(country_check, country_string))
  {
   Capitalizing(country_string);

   if( b == country_string)
   { 
      return 1;
   }
 
  }


   return 0;

}