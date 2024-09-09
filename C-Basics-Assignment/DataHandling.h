#include<iostream>

void DataHandling(){
  int PlayerHealth;
  int LivesCount;
  int PlayerID;
  int WinPercentage;
  bool HasPlayerWon;
  char PlayerType;

  std::cout << "Enter player health:";
  std::cin >> PlayerHealth ;
  std::cout << "Enter player Lives:";
  std::cin >> LivesCount ;
  std::cout << "Enter player ID:";
  std::cin >> PlayerID ;
  std::cout << "Enter player Type:";
  std::cin >> PlayerType ;
  std::cout << "Enter Win Percentage:";
  std::cin >> WinPercentage ;

  if(WinPercentage >= 70){ HasPlayerWon = true; }
  else { HasPlayerWon = false; }

  if(HasPlayerWon == true){
  std::cout<< "player ID:" << PlayerID << " has won with remaining lives:" << LivesCount << " with remaining health:" << PlayerHealth << " under Category:" << PlayerType << "\n";
  }
  else{
    std::cout<< "player ID:" << PlayerID << " has lost with remaining lives:" << LivesCount << " with remaining health:" << PlayerHealth << " under Category:" << PlayerType << "\n";
  }

  
}