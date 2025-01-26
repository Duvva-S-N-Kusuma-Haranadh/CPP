// Create a class customer
// Create Two Classes two Classes (Occasional & Regular) that inherit from Customer class.
// Print the bill of the customer for every class.
// Occasional customer bill is based on the distance in Kms.
// Regular customer bill is based on the number of tiffins.

#include <iostream>
using namespace std;

class Customer
{
public:
    string customerName;
    Customer(string name)
    {
        customerName = name;
    }
};

class OccasionalCustomer : public Customer
{
private:
    int distanceInKms;
    static int billNo;
    static string billId;

public:
    OccasionalCustomer(string name, int distance) : Customer(name)
    {
        distanceInKms = distance;
        billId = "O" + to_string(billNo);
        billNo++;
    }
    bool ValidateDistance()
    {
        if (distanceInKms <= 5 && distanceInKms >= 1)
        {
            return true;
        }
        else
        {
            cout << "Invalid Distance" << endl;
            return false;
        }
    }
    int calculateBillAmount()
    {
        if (ValidateDistance())
        {
            if (distanceInKms == 1 || distanceInKms == 2)
            {
                return 5 * distanceInKms + 50;
            }
            else
            {
                return 7.5 * distanceInKms + 50;
            }
        }
        else
        {
            return 0;
        }
    }

    void printBill()
    {
        cout << "Bill Id: " << this->billId << endl;
        cout << "Customer Name: " << this->customerName << endl;
        cout << "Distance: " << this->distanceInKms << endl;
        cout << "Bill Amount: " << calculateBillAmount() << " $" << endl;
        cout << "+-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -+" << endl;
    }
};

int OccasionalCustomer::billNo = 1001;
string OccasionalCustomer::billId = "";

class RegularCustomer : public Customer
{
private:
    int noOfTiffin;
    static int billNo;
    static string billId;

public:
    RegularCustomer(string name, int tiffin) : Customer(name)
    {
        noOfTiffin = tiffin;
        billId = "R" + to_string(billNo);
        billNo++;
    }
    bool ValidateNoOfTiffin()
    {
        if (noOfTiffin >= 1 && noOfTiffin <= 3)
        {
            return true;
        }
        else
        {
            cout << "Invalid Number of Tiffins." << endl;
            return false;
        }
    }
    int calculateWeekBillAmount()
    {
        if (!ValidateNoOfTiffin())
        {
            cout << "Invalid Number of Tiffins." << endl;
            return 0;
        }
        else
        {
            return 50 * noOfTiffin * 5;
        }
    }

    void printBill()
    {
        cout << "Bill Id: " << this->billId << endl;
        cout << "Customer Name: " << this->customerName << endl;
        cout << "Number of Tiffins: " << this->noOfTiffin << endl;
        cout << "Week Bill Amount: " << calculateWeekBillAmount() << " $" << endl;
        cout << "+-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -+" << endl;
    }
};

int RegularCustomer::billNo = 101;
string RegularCustomer::billId = "";

int main()
{
    RegularCustomer r1("Radhe", 3);
    r1.printBill();
    RegularCustomer r2("Shyam", 3);
    r2.printBill();
    RegularCustomer r3("Sita", 2);
    r3.printBill();
    RegularCustomer r4("Ram", 2);
    r4.printBill();
    OccasionalCustomer o1("Leela", 5);
    o1.printBill();
    OccasionalCustomer o2("Vinod", 5);
    o2.printBill();
    OccasionalCustomer o3("Gowri", 3);
    o3.printBill();
    OccasionalCustomer o4("Kishore", 3);
    o4.printBill();
}