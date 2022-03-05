//
//  WaveOfEnemies.hpp
//  tema2
//
//  Created by Stefan Alexandru on 05.03.2022.
//

#ifndef WaveOfEnemies_hpp
#define WaveOfEnemies_hpp

#include <stdio.h>
#include <string>

using namespace std;

class WaveOfEnemies
{
public:
    string getWaveName();
    void setWaveName(string name);
    
    int getNumOfEnemies();
    void setNumOfEnemies(int enemies_count);
    
    int getStartingHealth();
    void setStartingHealth(int health);
    
    float getMoneyPerEnemy();
    void setMoneyPerEnemy(float money);
private:
    string wave_name;
    int num_of_enemies;
    int starting_health;
    float money_per_enemy;
};

#endif /* WaveOfEnemies_hpp */
