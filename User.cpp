#include <iostream>
#include <random>
#include <fstream>
#include <string>
#include <vector>
#include "Headerfile.h"

//This is where hint section is



//This is where it ends.
void User(char input)
{
  Invalid:
       std::cout << '\n';
       std::string Userinput;
       std::getline(std::cin >> std::ws, Userinput);  
       
       if(Userinput == "HINT")
       {
        Hint(input); 
        goto Invalid;
       }
       Capitalizing(Userinput);

       if(!(Validate(Userinput)))
       {
       std::cout << "Invalid input, please enter an actual place's name.\n";
       goto Invalid;
       }
   
    if(!(Userinput[0] == input))
    {
        std::cout << "Error: Write a name beginning with  " << input;
        goto Invalid;
    }
    
    if(Storage_check(Userinput))
    {
        std::cout << "Error: You cannot call the name of a place, twice!\n";
        std::cout << "Write a different name:  ";
        goto Invalid;
    }

    Storage(Userinput);
    Cchoice(Userinput[Userinput.size()-1]);

}
