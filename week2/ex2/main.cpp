/*
 a header file for the global functions
 a cpp file for the global functions implementation
 a main.cpp file that shows how the methods and global functions can be used.
 */

#include <iostream>
#include "WaveOfEnemies.hpp"
#include "GlobalFiles.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    WaveOfEnemies w1;
    WaveOfEnemies w2;
    
    w1.setNumOfEnemies(100);
    w2.setNumOfEnemies(20);
    
    cout<<CompareWavesNumOfEnemies(w1, w2)<<endl;
    
    w1.setMoneyPerEnemy(100.2);
    w2.setMoneyPerEnemy(234.3);
    
    cout<<CompareWavesMoneyPerEnemy(w1, w2)<<endl;
    
    return 0;
}
