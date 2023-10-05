#include <iostream>
#include "Headerfile.h"
#include <random>
#include <fstream>
#include <string>
#include <vector>

int Hint(char a)
{
   
   std::srand(time(nullptr));
   char b;

   std::ifstream filing("filing.txt");
   std::string Intermediate;
   std::string bvalue;
   std::vector<std::string> Hint_P_list;
 //  std::vector<int> Hint_P_list_int;
  std::vector<std::string> Hint_list;

   while(std::getline(filing,Intermediate))
  {
    Hint_P_list.push_back(Intermediate);

  }
  
//Stolen from chatgpt
int i;
for (i = 0; i < Hint_P_list.size(); i++)
{
    b = Hint_P_list[i][0];
    b = toupper(b);
    if (a == b)
    {
        Hint_list.push_back(Hint_P_list[i]);
    }
}
 //Stolen from chatgpt.





  std::string Hint_to_be_sent;
   Hint_to_be_sent = Hint_list[rand()%Hint_list.size()];
   

   for(i=0;i<Hint_to_be_sent.size(); i++)
   {
    if((i%2) == 1)
    {
        Hint_to_be_sent[i] = '_';
    }
    
  
   }

 std::cout << Hint_to_be_sent << '\n';


return 0;
}