#include <iostream>
#include "Headerfile.h"
#include <fstream>
#include <string>
void Cchoice(char input)
{

    std::vector<std::string> filing_vector;
     std::ifstream filing("filing.txt");
     std::string Computer_selection;

     //The compuer here wasn't capitalized already because filing.txt
     //file has all the country's name beginning with capital letter.

     while(std::getline(filing,Computer_selection))
    {
    if((Computer_selection[0] == input) && !(Storage_check(Computer_selection)))
     filing_vector.push_back(Computer_selection);

    }   
    Computer_selection = filing_vector[rand()%filing_vector.size()];
    std::cout << "Computer's turn:  " << Computer_selection << '\n';
    Capitalizing(Computer_selection);
    Storage(Computer_selection);
    User(Computer_selection[Computer_selection.size()-1]);

}