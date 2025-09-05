#include <iostream>
using namespace std;

class Student {
private:
    string name;   
    int rollNumber;

public:

    Student(string n,int r) {
        name = n;
        rollNumber = r;
    }

    void display() {
        cout<< "Name :" << name <<endl;
        cout<<"RollNumber :"<<rollNumber<< endl;
    }
};

int main() {

    Student students[3] = {
        Student("Naivil", 101),
        Student("Yug", 102),
        Student("Aarya", 103)
    };

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}
