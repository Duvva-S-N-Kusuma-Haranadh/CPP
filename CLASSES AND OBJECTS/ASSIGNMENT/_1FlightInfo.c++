#include <iostream>
using namespace std;

class Flight
{
private:
    int flightId;
    string flightType;
    string origin;
    string destination;

public:
    Flight(int flightId, string flightType, string origin, string destination)
    {
        this->flightId = flightId;
        this->flightType = flightType;
        this->origin = origin;
        this->destination = destination;
        cout << "Flight Object Created." << endl;
    }

    void setFlightId(int flightId) { this->flightId = flightId; }
    void setFlightType(string flightType) { this->flightType = flightType; }
    void setOrigin(string origin) { this->origin = origin; }
    void setDestination(string destination) { this->destination = destination; }

    int getFlightId() { return flightId; }
    string getFlightType() { return flightType; }
    string getOrigin() { return origin; }
    string getDestination() { return destination; }
};

int main()
{
    Flight flight(123, "Boeing", "New York", "Los Angeles");
    cout << "Flight ID: " << flight.getFlightId() << endl;
    cout << "Flight Type: " << flight.getFlightType() << endl;
    cout << "Origin: " << flight.getOrigin() << endl;
    cout << "Destination: " << flight.getDestination() << endl;
    return 0;
}