#include <iostream>
#include <string>
using namespace std;
class Animal
{
    //attributes 
    public:
    string name;
    int age;

    //public constructor & methods
    //default constructor
    Animal(){
        name = "unknown";
        age = 0;
    };
    //parametrized
    Animal(string n, int a){
        name = n;
        age = a;
    };
    //methods
    void details(){
        cout <<"The name of the animal is "<<name<<" it is "<<age<<" years old"<<endl;
    }
};

//child class
class Pets : public Animal{
    public:
    void details(){
        cout<<"This is a pet!"<<endl;
        cout <<"The name of the animal is "<<name<<" it is "<<age<<" years old"<<endl;
    }
};

int main(){
    Animal a1;
    a1.details();
    Pets p1;
    p1.age = 12;
    p1.name = "Rabbit";
    p1.details();

return 0;
};