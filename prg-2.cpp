#include <iostream>
using std::string;

class Employee {
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    void setName(string name) {
        Name = name;
    }
    
    string getName() {
        return Name;
    }
    
    void setCompany(string company) {
        Company = company;
    }
    
    string getCompany() {
        return Company;
    }
    
    void setAge(int age) {
        if (age>18) {
            Age = age;
        }
        
    }
    
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main() {
    Employee emp1= Employee("chandu", "pqr", 21);
    emp1.IntroduceYourself();
    Employee emp2= Employee("gowda", "csg", 28);
    emp2.IntroduceYourself();
    emp1.setAge(20);
     std::cout << emp1.getName() << " is " << emp1.getAge() << " years old " << std::endl;
}