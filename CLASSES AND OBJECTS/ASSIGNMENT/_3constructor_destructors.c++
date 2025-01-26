#include <iostream>
using namespace std;

class Customer
{
private:
    int custID;
    string custName, custAddress;

public:
    Customer()
    {
        this->custID = 0;
        this->custName = nullptr;
        this->custAddress = nullptr;
    }
    Customer(int custId, string custName, string custAddress)
    {
        cout << "Object Created with some Values..." << endl;
        this->custID = custID;
        this->custName = custName;
        this->custAddress = custAddress;
    }

    void setCustId(int custId) { this->custID = custID; }
    int getCustId() { return this->custID; }
    void setCustName(string custName) { this->custName = custName; }
    string getCustName() { return this->custName; }
    void setCustAddress(string custAddress) { this->custAddress = custAddress; }
    string getCustAddress() { return this->custAddress; }

    void display(Customer cust)
    {
        cout << "ID: " << cust.getCustId() << endl;
        cout << "Name: " << cust.getCustName() << endl;
        cout << "Address: " << cust.getCustAddress() << endl;
    }
    ~Customer() { cout << "Object Destructed..." << endl; }
};

int main()
{
    Customer cust1(101, "Jake", "Manhattan");
    cust1.display(cust1);
    cust1.~Customer();
}