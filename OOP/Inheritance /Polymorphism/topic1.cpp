#include <iostream>
using namespace std;
class Shape{
    public:
    Shape(string n){
        name = n;
    }
    void draw(){
        cout<<"Drawing a : "<<name<<endl;
    }
    string name;
};

int main(){
    Shape * shapes[5];
    shapes[0] = new Shape("Circle");
    shapes[1] = new Shape("Square");
    shapes[2] = new Shape("Cube");
    shapes[3] = new Shape("Triangle");
    shapes[4] = new Shape("Trapezium");
    for (int i = 0; i < 5; i++)
    {
        shapes[i]->draw();
    }
    
    return 0;
};