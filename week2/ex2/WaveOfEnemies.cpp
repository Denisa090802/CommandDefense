//
//  WaveOfEnemies.cpp
//  tema2
//
//  Created by Stefan Alexandru on 05.03.2022.
//

#include "WaveOfEnemies.hpp"

string WaveOfEnemies::getWaveName()
{
    return wave_name;
}

void WaveOfEnemies::setWaveName(string name)
{
    wave_name = name;
}

int WaveOfEnemies::getNumOfEnemies()
{
    return num_of_enemies;
}

void WaveOfEnemies::setNumOfEnemies(int enemies_count)
{
    if(enemies_count > 0)
    {
        num_of_enemies = enemies_count;
    }
}

int WaveOfEnemies::getStartingHealth()
{
    return starting_health;
}

void WaveOfEnemies::setStartingHealth(int health)
{
    if(health > 0)
    {
        starting_health = health;
    }
}

float WaveOfEnemies::getMoneyPerEnemy()
{
    return money_per_enemy;
}

void WaveOfEnemies::setMoneyPerEnemy(float money)
{
    money_per_enemy = money;
}
