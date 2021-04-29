#include<iostream>
#include "BlumBlumShub.h"

using namespace std;

int main()
{
    const int P = 23;
    const int Q = 19;
    const int seed = 6;
    
    BlumBlumShub prng(P, Q, seed);
    
    //generating 20 random numbers
    
    cout << "20 Random Numbers generated \n";
    for (int i = 0; i < 20; i++)
    {
        cout << prng.getRandomNumber() << " \n";
    }
    
    cout << endl;
    
    //generating 20 random bits
    
    cout << "20 Random bit generated  \n";
    for (int i = 0; i < 20; i++)
    {
        cout << prng.getRandomBit() << " \n";
    }

    return 0;
}
