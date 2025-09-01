#include <iostream>
#include <vector>
#include <memory>

// Simple Enemy class
class Enemy {
private:
    int id;
public:
    Enemy(int enemyid):id(enemyid){ }
    void const Spawn(){
        std::cout << "Spawning Enemy ID:" << id << "\n";
    }
};

// Spawner class
class Spawner {
private:
    int nextEnemyId = 1;
public:
// passing std::shared_ptr<Enemy> to a vector helps to retrieve data easily later
// else when using Push_Back() method pointer count might not increment 
// & retrieve the wrong data
    std::vector<std::shared_ptr<Enemy>> SpawnEnemies(int level) {
        std::vector<std::shared_ptr<Enemy>> enemies;
         for (int i = 0; i < level; ++i) {
                //safe way to use shared pointers
                auto enemy = std::make_shared<Enemy>(nextEnemyId++);
                enemy->Spawn();
                enemies.push_back(enemy); //adds an enemy at start of new level
         }
        return enemies;
    }
};

int main() {
    Spawner spawner;
    int level;
    for(level = 1; level <= 4; ++level) {
        std::cout << "Level:" << level << "\n";
        auto enemies = spawner.SpawnEnemies(level);
        std::cout << "Total enemies spawned: " << enemies.size() << "\n";
    }
    return 0;
}
