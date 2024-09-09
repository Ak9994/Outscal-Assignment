#include<iostream>

int atk(){
  bool IsPlayerinRange;
  bool IsPlayerAttacking,IsPlayerDefending;
  int range;
  int health;
  
  std::cout << "Enter Range \n";
  std::cin >> range;
  std::cout << "Is player in range? \n" << "is player attacking? or Defending? \n";
  std::cin >> IsPlayerinRange >> IsPlayerAttacking >> IsPlayerDefending;
  std::cout << "enter player health \n";
  std::cin >> health;

  //while((range > 0) && (health != 0)){
    if(IsPlayerinRange == true){
        if(IsPlayerAttacking == false){
            std::cout << "enemy should attack \n";
            }
        else if(IsPlayerDefending == true){
            std::cout << "enemy should hold \n";
            }
        else if((IsPlayerAttacking == true) && (health < 20)){
            std::cout << "Rage Atk \n";
            }
        else{
            if(((IsPlayerDefending == false) && (health == 100))||(health < 10)){
            std::cout << "Watch out , Enemy Special attack incoming \n";
        }
    }
  }
  else{
    std::cout << "Player not in Range , Unable to take action \n";
  }
//};
}