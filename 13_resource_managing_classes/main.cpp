#include <iostream>
#include <vector>

using namespace std;

class Person{

public:
    Person(string name) {pName_ = new string(name);}
    ~Person() {delete pName_;}
    // Copy Constructor - solution 1
    /*Person(const Person& rhs){
        pName_ = new string (*(rhs.pName()));
    }*/
    // Copy assignment - solution 2
    //Person& operator = (const Person& rhs); //deep copy
    void printName() {cout << *pName_;}
    string* pName() const {return pName_;}

    Person* clone(){
        return (new Person(*(pName())));
    }

private:
    Person(const Person& rhs);
    Person& operator = (const Person& rhs);
    string* pName_;
};

// Solution 1: Define copy constructor and copy assignment operator for deep copying
// Solution 2: Delete copy constructor and copy assignment operator, define clone function
//      - STL constainers

int main() {

    vector<Person*> persons;

    //persons.push_back(Person("George"));
    persons.push_back(new Person("George"));
    // 1. "George" is constructed
    // 2. A copy of "George" is saved in the vector persons
    //       - we are making a shallow copy of Person - pointed to same object of string
    // 3. "George" is destroyed.

    //persons.back().printName();
    persons.back()->printName();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}