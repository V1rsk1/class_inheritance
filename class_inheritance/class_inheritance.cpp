#include <iostream>
#include <Windows.h>
using namespace std;

class Transport {
public:
    int year;
    string brand;
    double speed;
    double distance;

    Transport() : year(0), brand(""), speed(0), distance(0) {}

    Transport(int y, string b, double s, double d)
        : year(y), brand(b), speed(s), distance(d) {}
};

class Car : public Transport {
public:
    string engineType;
    int fuelCost;

    Car(int y, string b, double s, double d, string engine, int fuel)
        : Transport(y, b, s, d), engineType(engine), fuelCost(fuel) {
        cout << "Автомобіль" << endl;
        cout << "Марка: " << 
            brand << "\nРік: " << 
            year << "\nДистанція: " << 
            distance << " км\nШвидкість: " << 
            speed << " км/год\nДвигун: " << 
            engineType << endl;
        cout << "Час: " << distance / speed << " год\n";
        cout << "Вартість: " << (distance / 100) * fuelCost * 60 << " грн\n";
    }
};

class Bicycle : public Transport {
public:
    int gears;
    int amortizationCost;
    int maintenanceCost;
    int extraCosts;

    Bicycle(int y, string b, double s, double d, int g, int amort, int maintenance, int extra)
        : Transport(y, b, s, d), gears(g), amortizationCost(amort), maintenanceCost(maintenance), extraCosts(extra) {
        cout << "Велосипед" << endl;
        cout << "Марка: " <<
            brand << "\nРік: " << 
            year << "\nДистанція: " << 
            distance << " км\nШвидкість: " << 
            speed << " км/год\nПередачі: " << 
            gears << endl;
        cout << "Час: " << distance / speed << " год\n";
        cout << "Вартість: " << (amortizationCost + maintenanceCost + extraCosts) * distance << " грн\n";
    }
};

class Cart : public Transport {
public:
    string puller;
    double amortizationCost;
    double maintenanceCost;
    double extraCosts;

    Cart(int y, string b, double s, double d, string p, double amort, double maintenance, double extra)
        : Transport(y, b, s, d), puller(p), amortizationCost(amort), maintenanceCost(maintenance), extraCosts(extra) {
        cout << "Віз" << endl;
        cout << "Марка: " << 
            brand << "\nРік: " << 
            year << "\nДистанція: "<< 
            distance << " км\nШвидкість: " << 
            speed << " км/год\nТягач: " << 
            puller << endl;
        cout << "Час: " << distance / speed << " год\n";
        cout << "Вартість: " << (amortizationCost + maintenanceCost + extraCosts) * distance << " грн\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Car car(2018, "Renault", 155, 583, "Duster", 30);
    cout << endl;
    Bicycle bike(2015, "Schwinn", 32, 267, 17, 5, 7, 8);
    cout << endl;
    Cart cart(1998, "Strongway", 15, 180, "Кінь", 1.5, 2.5, 6);

    return 0;
}