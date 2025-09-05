#include <iostream>
using namespace std;


class Animal {
public:
    virtual void makeSound() const = 0; 
    virtual void move() const = 0;       
    virtual ~Animal() {}                 
};

class Lion : public Animal {
public:
    void makeSound() const override {
        cout << "Lion roars...." << endl;
    }

    void move() const override {
        cout << "Lion live in forest." << endl;
    }
};

class Fish : public Animal {
public:
    void makeSound() const override {
        cout << "Fish lives in water." << endl;
    }

    void move() const override {
        cout << "Fish swims in water." << endl;
    }
};

int main() {
    const int size = 2;
    Animal* animals[size];

    animals[0] = new Lion();
    animals[1] = new Fish();

    for (int i = 0; i < size; ++i) {
        animals[i]->makeSound(); 
        animals[i]->move();   
        cout << endl;
    }

    for (int i = 0; i < size; ++i) {
        delete animals[i];
    }

    return 0;
}
