/*Create a function taking a positive integer between 1 and 3999 
(both included) as its parameter and returning a string containing 
the Roman Numeral representation of that integer.

Modern Roman numerals are written by expressing each digit separately 
starting with the leftmost digit and skipping any digit with a value of zero. 
There cannot be more than 3 identical symbols in a row.

In Roman numerals:

1990 is rendered: 1000=M + 900=CM + 90=XC; resulting in MCMXC.
2008 is written as 2000=MM, 8=VIII; or MMVIII.
1666 uses each Roman symbol in descending order: MDCLXVI*/

#include <string>
#include <sstream>
#include <iostream>
#include <conio.h>

std::string solution(int number)
{
  if(1 <= number && 3999 >= number)
  {
    std::stringstream ss;
    std::string result;
    switch(number/1000)
    {
        case 1: ss << "M"; break;
        case 2: ss << "MM"; break;
        case 3: ss << "MMM"; break;
    }
    switch(number/100  % 10)
    {
        case 1: ss << "C"; break;
        case 2: ss << "CC"; break;
        case 3: ss << "CCC"; break;
        case 4: ss << "CD"; break;
        case 5: ss << "D"; break;
        case 6: ss << "DC"; break;
        case 7: ss << "DCC"; break;
        case 8: ss << "DCCC"; break;
        case 9: ss << "CM"; break;
    }
    switch(number/10 % 10)
    {
        case 1: ss << "X"; break;
        case 2: ss << "XX"; break;
        case 3: ss << "XXX"; break;
        case 4: ss << "XL"; break;
        case 5: ss << "L"; break;
        case 6: ss << "LX"; break;
        case 7: ss << "LXX"; break;
        case 8: ss << "LXXX"; break;
        case 9: ss << "XC"; break;
    }
    switch(number % 10)
    {
        case 1: ss << "I"; break;
        case 2: ss << "II"; break;
        case 3: ss << "III"; break;
        case 4: ss << "IV"; break;
        case 5: ss << "V"; break; 
        case 6: ss << "VI"; break;
        case 7: ss << "VII"; break;
        case 8: ss << "VIII"; break;
        case 9: ss << "IX"; break;
    }
    result = ss.str();
    return result;
  }
  else
  {
    return "The number isn't between 1 and 3999 \n";
  }
}

int main()
{
    int num = 3253;
    std::cout << solution(num) << std::endl;

    std::cout << "Press any key to continue..." << std::endl;
    _getch();
    return 0;
}