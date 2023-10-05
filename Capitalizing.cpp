#include <iostream>
#include <string>
#include "Headerfile.h"
void Capitalizing(std::string& a)

{
    int b;

    for(b=0; b < a.length(); b++)
    {
        a[b] = toupper(a[b]);
    }
    
    
}