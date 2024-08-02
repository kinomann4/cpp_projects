/*Two tortoises named A and B must run a race. A starts with an average speed of 720 feet per hour.
Young B knows she runs faster than A, and furthermore has not finished her cabbage.

When she starts, at last, she can see that A has a 70 feet lead but B's speed is 850 feet per hour. 
How long will it take B to catch A?

More generally: given two speeds v1 (A's speed, integer > 0) and v2 (B's speed, integer > 0) and a lead g (integer > 0) 
how long will it take B to catch A?

The result will be an array [hour, min, sec] which is the time needed in hours, minutes and 
seconds (round down to the nearest second) or a string in some languages.

If v1 >= v2 then return nil, nothing, null, None or {-1, -1, -1} 

Examples:
(form of the result depends on the language)

race(720, 850, 70) => [0, 32, 18] or "0 32 18"
race(80, 91, 37)   => [3, 21, 49] or "3 21 49"*/

#include <iostream>
#include <vector>
#include <conio.h>

class Tortoise
{
private:
    int v1;
    int v2;
    int g;
public:
    Tortoise(int a, int b, int c)
    {
        v1 = a;
        v2 = b;
        g = c;
    }
    std::vector<int> race();
    void output(std::vector<int> (Tortoise::*func)());                                  //
};

std::vector<int> Tortoise::race()
{
    if (v1 >= v2)
    { 
        return {-1, -1, -1}; 
    }
    else
    {
        int res_sec = static_cast<int>(g / (static_cast<double>(v2 - v1) / 3600));      //
        int hours = res_sec/3600;
        int minutes = (res_sec % 3600) / 60;
        int seconds = res_sec % 60;
        return {hours, minutes, seconds};
    }
}


void Tortoise::output(std::vector<int> (Tortoise::*func)())                             //
{
    std::vector<int> result = (this->*func)();                                          //
    
    for (int time : result) {
        std::cout << time << " ";
    }
    std::cout << std::endl;
}

int main()
{
    Tortoise tor1(720, 850, 70);
    tor1.output(&Tortoise::race);
    Tortoise tor2(80, 91, 37);
    tor2.output(&Tortoise::race);

    std::cout << "Press any key to continue..." << std::endl;
    _getch();
    return 0;
}