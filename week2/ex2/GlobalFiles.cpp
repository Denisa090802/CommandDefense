//
//  GlobalFiles.cpp
//  tema2
//
//  Created by Stefan Alexandru on 05.03.2022.
//

#include "GlobalFiles.hpp"
#include "WaveOfEnemies.hpp"

int CompareWavesNumOfEnemies(WaveOfEnemies w1, WaveOfEnemies w2)
{
    if(w1.getNumOfEnemies() > w2.getNumOfEnemies()) { return 1; }
    else { return 0; }
}

int CompareWavesMoneyPerEnemy(WaveOfEnemies w1, WaveOfEnemies w2)
{
    if(w1.getMoneyPerEnemy() > w2.getMoneyPerEnemy()) { return 1; }
    else { return 0; }
}
