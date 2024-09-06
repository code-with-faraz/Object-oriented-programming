#include <iostream>
using namespace std;

// abstract class  
class AbstractEmployee {
    virtual void askForPromotion()=0;
};

class Employee: AbstractEmployee{
private:
    string Name;
    string Company;
    int Age;

public:
    // Constructor
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    // Setter for Name
    void setName(string name) {
        Name = name;
    }

    // Getter for Name
    string getName() {
        return Name;
    }

    // Setter for Company
    void setCompany(string company) {
        Company = company;
    }

    // Getter for Company
    string getCompany() {
        return Company;
    }

    // Setter for Age
    void setAge(int age) {
        if(age<=18)
        Age = age;
    }

    // Getter for Age
    int getAge() {
        return Age;
    }

    // Method to introduce yourself
    void introduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

    void askForPromotion(){
        if(Age>30)
            cout << Name <<  " got promoted!" << endl;
            else
            cout << "Sorry, No promotion for you!"<< endl;
    }
};

int main() {
    // Create Employee objects using the constructor
    Employee employee1 = Employee("Faraz Mirza", "Google", 40);
    Employee employee2 = Employee("Joseph Joestar", "Speedwagon Foundation", 25);

    employee1.askForPromotion();
    employee2.askForPromotion();
    

    return 0;
}