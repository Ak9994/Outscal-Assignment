#include<iostream>

void shooting(){
    std::cout << "player is shooting!";
}
void healing(){
    std::cout << "player is healing";
}
void attacking(){
    std::cout << "player is attacking";
}

void looping(){
    int i = 0 ,j = 0,k = 0;

    for(i = 0; i <= 10; i++){
        shooting();
    }
    
    while(j <= 5){
        healing();
        j++;
    }
    
    do{
        attacking();
        k++;
    }while(k <= 7);
}