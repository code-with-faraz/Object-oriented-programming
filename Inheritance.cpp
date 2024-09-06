#include <iostream>
using namespace std;

// abstract class  
class AbstractEmployee {
    virtual void askForPromotion()=0;
};

class Employee: AbstractEmployee{
private:
    string Company;
    int Age;

protected:
    string Name;

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

class Developer: public Employee{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
    : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }    

    void fixBug(){
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }

};

class teacher: public Employee{
public:
    string Subject;
    void prepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }

    teacher(string name, string company, int age, string Subject)
    : Employee(name, company, age)
    {
        this->Subject = Subject;
    }
};

// Main function
int main() {
    Developer d = Developer("Faraz Mirza", "YouTube", 40, "C++");
    teacher t = teacher("Jack","Army Public School",35,"Maths");
    t.prepareLesson();
    t.askForPromotion();
        return 0;
}