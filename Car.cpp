#include <iostream>
using namespace std;

class Car{

    private:
    string model;
    int year,speed;

    public:
    void setCar(){

        cout << "---Enter Details of Car ---";
        
        cout<<"Enter Model of Car :"<<endl;
        cin>>model;

        cout<<"Enter Year :"<<endl;
        cin>>year;

        cout<<"Enter Speed of Car :"<<endl;
        cin>>speed;
    }

    void getCar(){

        cout << "--- Car Details ---";

        cout<<"Model :"<<model<<endl;

        cout<<"Year :"<<year<<endl;

        cout<<"Speed :"<<speed<<endl;

    }

};

int main()
{	int size;
	cout << "Enter Number of Car :";
	cin >> size;
	Car car[size];

	for (int i = 0; i < size; i++)
	{
		car[i].setCar();
	}
	for (int i = 0; i < size; i++)
	{
		car[i].getCar();
	}

    return 0;
}