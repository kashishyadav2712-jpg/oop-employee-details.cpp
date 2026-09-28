#include <iostream>

#include <string>

using namespace std;

class Product

{

private:

    int ProductID;

    string ProductName;

    float Price;

    float MonthlySales[12];

    int TotalQuantity;

    float TotalBill;

public:

    void acceptdetails()

    {

        cout << "Enter ProductID: ";

        cin >> ProductID;

        cin.ignore();

        cout << "Enter Product Name: ";

        getline(cin, ProductName);

        cout << "Enter Price per unit: ";

        cin >> Price;

        cout << "Enter Monthly Sales for 12 months: ";

        TotalQuantity = 0;

        for (int i = 0; i < 12; i++) {

            cin >> MonthlySales[i];

            TotalQuantity += MonthlySales[i];

        }

class Product {

    void displaydetails() {

        for (int i = 0; i < 12; i++) {

        }

        TotalBill = TotalQuantity * Price;

    }

    void displayDetails() {

        cout << "\nProductID: " << ProductID << endl;

        cout << "Product Name: " << ProductName << endl;

        cout << "Price: " << Price << endl;

        cout << "Total Quantity Sold: " << TotalQuantity << endl;

        cout << "Total Bill: " << TotalBill << endl;

    }

    float getTotalBill() {

        return TotalBill;

    }

};
