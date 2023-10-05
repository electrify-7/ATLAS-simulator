#include <iostream>
#include <string>
#include "Headerfile.h"
#include <random>
#include <fstream>
#include <vector>



int main()
{
    //Introductory comments for Player.
    std::cout << "Hey! Have you heard of ATLAS?\n";
    std::cout << "This is a small code stimulating the game atlas where rules are pretty simple. Either you or bot start with a coutry/city/state's name, the other has to take the ending letter of the input and write the name of a country/city/state beginning with that letter!\n";
    std::cout << "If you ever need a hint, just type in 'HINT'. \n";
    std::cout << "Also, one last thing to add to spice before you start playing, You cannot say the name of a country that has already been said before! XD\n";


   
   //Decide between who gets to play first using rand() seeded with nullptr.
    
    std::srand(time(nullptr));

   
    
    if((rand()%2+1) == 1)
    {
      
       std::cout << "The roll is on you! Start the game with a place(Country/city/state's) name.\n";
       Invalid:
       std::string Userinput;
       std::getline(std::cin >> std::ws, Userinput);  
       Capitalizing(Userinput);
       
       if(!(Validate(Userinput)))
       {
       std::cout << "Invalid input, please enter an actual place(Country/city/state's) name.\n";
       goto Invalid;
       }
      Storage(Userinput);
      Cchoice(Userinput[Userinput.size()-1]);

    }

    else
    {
     std::vector<std::string> filing_vector;
     std::ifstream filing("filing.txt");
     std::string Computer_selection;

     while(std::getline(filing,Computer_selection))
     filing_vector.push_back(Computer_selection);
       
    Computer_selection = filing_vector[rand()%filing_vector.size()];
    std::cout << "Computer's turn: " << Computer_selection << '\n';
    Capitalizing(Computer_selection);
    Storage(Computer_selection);
    std::cout << "Choose a place starting with the letter: " << Computer_selection[Computer_selection.size()-1];
    std::cout << '\n';
    User(Computer_selection[Computer_selection.size()-1]);

    }
     
 return 0;

}