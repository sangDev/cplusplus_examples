#include <iostream>

using namespace std;

class GumballMachine {

private:
    State soldOutState;


public:
    //other instance variable
    string location;

    GumballMachine (string location, int count ) {
        // other constructor code here
        this.location = location;
    }

    string getLocation(){
        return location;
    }
};

class GumballMonitor{

public:
    GumballMachine machine;

    GumballMonitor (GumbalMachine machine) {
        this.machine = machine;
    }

    void report(){
        cout << "Gumball Machine: ", + machine.getLocation() << endl;
        cout << "Current Inventory: ", + machine.getCount() + , "gumballs" << endl;
        cout << "Current State: ", + machine.getState() << endl;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}