#include <iostream>
using namespace std;

class Customer
{
private:
    int custID;
    string custName, custAddress;

public:
    static int m_iCustomerCount;
    Customer()
    {
        m_iCustomerCount++;
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

    static int getCustomerCount() { return m_iCustomerCount; }

    void setCustId(int custId) { this->custID = custID; }
    const int getCustId() { return this->custID; }
    void setCustName(string custName) { this->custName = custName; }
    const string getCustName() { return this->custName; }
    void setCustAddress(string custAddress) { this->custAddress = custAddress; }
    const string getCustAddress() { return this->custAddress; }

    void display(Customer cust)
    {
        cout << "ID: " << cust.getCustId() << endl;
        cout << "Name: " << cust.getCustName() << endl;
        cout << "Address: " << cust.getCustAddress() << endl;
    }
    ~Customer()
    {
        cout << "Object Destructed..." << endl;
        m_iCustomerCount--;
    }
};

int Customer::m_iCustomerCount = 0;

int main()
{
    Customer cust1(101, "Jake", "Manhattan");
    cust1.display(cust1);
    cout << cust1.getCustomerCount() << endl;
}