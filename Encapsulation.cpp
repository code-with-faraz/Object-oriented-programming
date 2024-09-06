#include <iostream>
using namespace std;

class Employee {
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
};

int main() {
    // Create Employee objects using the constructor
    Employee employee1 = Employee("Faraz Mirza", "Google", 21);
    employee1.introduceYourself();

    Employee employee2 = Employee("Joseph Joestar", "Speedwagon Foundation", 25);
    employee2.introduceYourself();

    // Set and get age
    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    return 0;
}