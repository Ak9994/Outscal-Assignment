#include<iostream>

void Check() {
  int PlayerHealth;
  int EnemyHealth;

  std::cout << " \n This is simple conditional check \n";
  std::cout << "enter player health:" << "\n";
  std::cin >> PlayerHealth;
  std::cout << "enter enemy health:" << "\n";
  std::cin >> EnemyHealth;
  
  if((PlayerHealth == 100) || (PlayerHealth == 50)) {
    if((EnemyHealth == 100) || (EnemyHealth==50)) {
      std::cout << "Draw" << "\n";
    } }
  else if(PlayerHealth > EnemyHealth){
    if(EnemyHealth >= 0) {
      std::cout << "Continue on , you have almost won" << "\n";
    } } 
  else if(PlayerHealth < EnemyHealth) {
    if(PlayerHealth >= 0) {
      std::cout << "game over , u lose Good Sir!" << "\n";
    } }
  else
  if((PlayerHealth == 0) && (EnemyHealth == 0)) {
      std::cout << "game over , its a Draw" << "\n";
    }
}

