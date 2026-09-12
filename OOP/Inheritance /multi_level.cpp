#include <iostream>
using namespace std;

class Creature{
    public:
    string type;
    Creature(){
        type = "non-living/living thing";
    }
    Creature(string t){
        type = t;
    }
    void details(){
        cout<<"I am a "<<type<<endl;
    }
};
//child class
class Human: public Creature{
    public:
    string gender;
    Human(){
        gender = "Male/female";
    }
    Human(string g){
        gender = g;
    };
    void details(){
        cout<<"I am a "<<gender<<endl;
    }
};
//grandchild class of parent creature
class Man : public Human{
    public:
    int age;
    string name;
    void details(){
        cout<<"I am a human, my name is "<<name<<" I am "<<age<<" years old"<<endl;
        cout<<"My gender is "<<gender<<endl;
        cout<<"And I am a "<<type<<endl;
    }
};
int main(){
    Man m1;
    m1.age = 19;
    m1.name = "Supper Woman";
    m1.gender = "female";
    m1.type = "Living thing.";
    m1.details();
return 0;
};
