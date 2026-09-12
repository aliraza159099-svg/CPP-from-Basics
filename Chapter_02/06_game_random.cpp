#include<iostream>
#include<random>
using namespace std;

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int>dist(1,100);
    int randomNumber = dist(gen);
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    if((randomNumber% 2==0 and num%2 == 0)){
        cout<<"You lose the game both enter even number";
        cout<<"Computer enter "<<randomNumber;
    }
    else if((randomNumber%2 !=0 and num%2 != 0)){
        cout<<"You lose the game both enter odd number";
        cout<<"Computer enter "<<randomNumber;
    }
    else{
        cout<<"You won the game";
        cout<<"Computer enter "<<randomNumber;
    }

    return 0;
}