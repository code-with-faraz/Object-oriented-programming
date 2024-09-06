#include<iostream>
using namespace std;

class Employee{
private:
    string name;
    string company;
    int age;
    public:

void introduceyourself(){
        cout << "Name - "<< name << endl;
        cout << "Company - "<< company << endl;
        cout << "Age - "<< age<< endl;
    }
    Employee(string Name, string Company, int Age){
        name= Name;
        company= Company;
        age= Age;
    }
};

int main(){
    Employee employee1= Employee("Faraz Mirza", "Google", 21);
    employee1.introduceyourself();
    

    Employee employee2= Employee("Joseph Joestar","Speedwagon Foundation", 25);
    employee2.introduceyourself();
    return 0;
}