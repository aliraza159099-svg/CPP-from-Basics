// #include <iostream>
// using namespace std;
// class Shape{
//     public:
//     Shape(string n){
//         name = n;
//     }
//     void draw(){
//         cout<<"Drawing a : "<<name<<endl;
//     }
//     string name;
// };

// int main(){
//     Shape * shapes[5];
//     shapes[0] = new Shape("Circle");
//     shapes[1] = new Shape("Square");
//     shapes[2] = new Shape("Cube");
//     shapes[3] = new Shape("Triangle");
//     shapes[4] = new Shape("Trapezium");
//     for (int i = 0; i < 5; i++)
//     {
//         shapes[i]->draw();
//     }
    
//     return 0;
// };

#include <iostream>
using namespace std;

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default; // Crucial for memory safety in inheritance

    // Making this virtual allows derived classes to override it dynamically
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived classes
class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a : Circle" << endl; }
};

class Square : public Shape {
public:
    void draw() override { cout << "Drawing a : Square" << endl; }
};

int main() {
    // Array of base pointers holding derived objects
    Shape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();

    for (int i = 0; i < 2; i++) {
        shapes[i]->draw(); // Polymorphism at work!
    }

    // Manual cleanup required for raw pointers
    delete shapes[0];
    delete shapes[1];
    
    return 0;
}
