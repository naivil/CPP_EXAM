#include <iostream>
using namespace std;

class Device {
private:
    char brand[50]; 
    int powerConsumption;

public:
    void setBrand() {
        cout << "Enter brand of Device: ";
        cin >> brand;
    }

    void setPowerConsumption() {
        cout << "Enter power consumption: ";
        cin >> powerConsumption;
    }

    char* getBrand() {
        return brand;
    }

    int getPowerConsumption() {
        return powerConsumption;
    }
	virtual void calculateDiscount(void) {}
};

class Laptop : public Device {
public:
    int ram;
    int cpuSpeed;

    void laptop() {
        setBrand();
        setPowerConsumption();
        cout << "Enter RAM (in GB): ";
        cin >> ram;
        cout << "Enter CPU Speed (in GHz): ";
        cin >> cpuSpeed;
    }

    void display() {
        cout << "/--- Laptop Details ---/" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPowerConsumption()<< endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "CPU Speed: " << cpuSpeed << endl;
    }
	void calculateDiscount(void) override
	{
		cout << "Discount of Laptop is: " << 5 << " %" << endl;
	}
};

class Smartphone : public Device {
public:
    char model[50];
    int cameraMP;

    void smartphone() {
        setBrand();
        setPowerConsumption();
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter camera MP: ";
        cin >> cameraMP;
    }

    void display() {
        cout << "/--- Smartphone Details ---/" << endl;
        cout << "Brand: " << getBrand() << endl;
        cout << "Power: " << getPowerConsumption() << endl;
        cout << "Model: " << model << endl;
        cout << "Camera: " << cameraMP << endl;
    }
	void calculateDiscount(void) override
	{
		cout << "Discount of SmartPhone is: " << 6 << " %" << endl;
	}
};

int main() {
    int choice,i,j;
    Laptop laptop;
    Smartphone smartphone;
	Device *Device[2];
	for (i = 0; i < 1; i++)
	{
		Device[i] = &laptop;
		Device[i]->calculateDiscount();
	}

	for (j = 0; j < 1; j++)
	{
		Device[j] = &smartphone;
		Device[j]->calculateDiscount();
	}
	
	

    while (choice) {
        cout << "\n==== Device Menu ====" << endl;
        cout << "1. Enter Laptop Details" << endl;
        cout << "2. Display Laptop Details" << endl;
        cout << "3. Enter Smartphone Details" << endl;
        cout << "4. Display Smartphone Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                laptop.laptop();
                break;
            case 2:
                laptop.display();
                break;
            case 3:
                smartphone.smartphone();
                break;
            case 4:
                smartphone.display();
                break;
            case 5:
                cout << "Exiting program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }

	return 0;
}