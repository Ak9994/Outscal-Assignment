#include <iostream>
int takedamage(int damagetoinflicit,int health){
  while(health > 0){
    health = health - damagetoinflicit;
  };
  return health;
}

int heal(int healthtorecover,int health){
  return health+healthtorecover;
}

int damagemultiplier(int multiplier,int dmg){
  return dmg*multiplier;
}

int Functionmain() {
  int attack,Defense,health,healing;
  int HEALTH,HEALED,BUFF;
  
  //Player stats
  std::cout << "Enter player stats:";
  std::cin >> attack >> Defense >> health;

  //Display stats
  std::cout << "Player stats are: \n";
  std::cout << "Player atk is: " << attack << "\n";
  std::cout << "Player def is: " << Defense << "\n";
  std::cout << "Player Health is: " << health << "\n";

  HEALTH = takedamage(attack,health);
  std::cout << "player has remaining:" << health << "\n";

  HEALED = heal(healing,health);
  std::cout << "Health healed:" << health << "\n";

  BUFF = damagemultiplier(10,attack);
  std::cout << "The attack has dmg multiplier:" << BUFF << "\n";
}