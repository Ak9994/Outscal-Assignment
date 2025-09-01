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
//PlayerLevelEnemySpawn class
class PLES{
private:
    int glevel;
    int plevel;
public:
    PLES(int gl,int pl){
        glevel = gl;
        plevel = pl;
    }
    //Spawn
    Spawn(int gamelevel,int playerlevel){ }
    //SpawnVector
    std::vector<Enemy> SpawnFn(int enemylimit){
        std::vector<Enemy> target;
        for(int i=0;i<=enemylimit;i++){
            target.emplace_back()
        }
    }
}