
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string cpName;
    string model;
    int year;
    double price;

public:
    Car(const string& CarcpName, const string& Carmodel, int Caryear, double Carprice)
        : cpName(CarcpName), model(Carmodel), year(Caryear), price(Carprice) {}

    // Getter methods
    string getcpName() const {
        return cpName;
    }

    string getmodel() const {
        return model;
    }

    int getyear() const {
        return year;
    }

    double getprice() const {
        return price;
    }

    // Setter methods
    void setcpName(const string& CarcpName) {
        cpName = CarcpName;
    }

    void setmodel(const string& Carmodel) {
        model = Carmodel;
    }

    void setyear(int Caryear) {
        year = Caryear;
    }

    void setprice(double Carprice) {
        price = Carprice;
    }
};

int main() {
    Car myCar("Mahendra", "Kya pta", 2022, 2020000.00);

    cout << "The name of company is: " << myCar.getcpName() << endl;
    cout << "The name of model is: " << myCar.getmodel() << endl;
    cout << "The year of manufacture is: " << myCar.getyear() << endl;
    cout << "The price of the car is: " << myCar.getprice() << endl;

    return 0;
}
