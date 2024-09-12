#include<iostream>

int main(){
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    int sum = 0;

    for(int i=0;i<=10;i++){
        sum = sum + ar[i];
    }

    std::cout << "sum of natural no is" << sum << "\n";
}
