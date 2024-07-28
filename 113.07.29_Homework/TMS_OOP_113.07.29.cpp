#include <iostream>
#include <string>
using namespace std;

// 基礎類別 (父類別)
class Vehicle {
protected:
    string brand;  // 品牌
    string model;  // 型號
    int year;      // 年份

public:
    // 建構子 Vehicle
    Vehicle(string b, string m, int y) : brand(move(b)), model(move(m)), year(y) {}

    // 虛擬函數顯示詳細訊息 (Virtual function to display details)
    // virtual: 表示 displayDetails 是一個虛擬函數; void: 這個函數不返回任何值; 
    // displayDetails(): 函數的名稱; const: 表示這個函數不會修改任何成員變量
    virtual void displayDetails() const {
        cout << "Brand: " << brand << "; Model: " << model << "; Year: " << year ;
    }
};

// 衍生類別 (子類別1 - 汽車 Car)
class Car : public Vehicle {
private:
    int seats;  // 座位數

public:
    // 建構子 Car 
    Car(string b, string m, int y, int s) : Vehicle(move(b), move(m), y), seats(s) {}

    // 方法：顯示汽車訊息
    // void 表示此方法不會返回任何值。
    // const 表示此方法不會修改任何成員變數。
    // override 表示此方法是從基類（父類）中覆蓋來的。

    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "; Seats: " << seats << endl;
    }
};

// 衍生類別 (子類別2 - 卡車 Truck)
class Truck : public Vehicle {
private:
    int Capacity;  // 貨物容量 

public:
    // 建構子 Truck 
    Truck(string b, string m, int y, int c) : Vehicle(move(b), move(m), y), Capacity(c) {}

    // 方法：顯示卡車訊息
    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "; Cargo Capacity: " << Capacity << " tons" << endl;
    }
};

// 衍生類別 (子類別3 - 腳踏車 Bicycle)
class Bicycle : public Vehicle {
private:
    int gears;  // 齒輪數 

public:
    // 建構子 Bicycle 
    Bicycle(string b, string m, int y, int g) : Vehicle(move(b), move(m), y), gears(g) {}

    // 方法：顯示腳踏車訊息
    void displayDetails() const override {
        Vehicle::displayDetails();
        cout << "; Gears: " << gears << endl;
    }
};

int main() {
    // 創建 Car, Truck 和 Bicycle 物件 
    Car car("Toyota", "RAV4", 2024, 5);
    Truck truck("Volvo", "FH16", 2023, 3);
    Bicycle bicycle("Giant", "Escape 3", 2020, 25);

    // 使用物件的方法
    car.displayDetails();
    truck.displayDetails();
    bicycle.displayDetails();

    return 0;
}
