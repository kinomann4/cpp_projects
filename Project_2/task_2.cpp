/*Complete the method/function so that it converts dash/underscore delimited words into 
camel casing. The first word within the output should be capitalized only if the original 
word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). 
The next words should be always capitalized.

Examples
"the-stealth-warrior" gets converted to "theStealthWarrior"

"The_Stealth_Warrior" gets converted to "TheStealthWarrior"

"The_Stealth-Warrior" gets converted to "TheStealthWarrior"*/


#include <string>
#include <iostream>
#include <sstream>
#include <conio.h>

std::string to_camel_case(std::string text) {
  std::stringstream ss;
  char temp;
  for(int i = 0; i < text.length(); i++)
  {
     if(text[i] != '-')
    {
        ss << text[i];
    }
    else
    {
        i+=1;
        temp = text[i];
        temp -= 32;
        ss << temp;
    }
  }
  text = ss.str();
  return text;
}

int main()
{
    std::string a = "the-stealth-warrior";
    std::cout << to_camel_case(a) << std::endl;;

    std::cout << "Press any key to continue..." << std::endl;
    _getch();
    return 0;
}