#include <iostream>
using std::string;
using std::cout;

class Employee
{
    public: 
        string Name;
        string Company;
        int Age;
        void IntroduceYourself()
        {
            cout << "name -" << Name << std::endl;
            cout << "company -" << Company << std::endl;
            cout << "age -" << Age << std::endl;
        }
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};

int main()
{
    Employee employee1 = Employee("zineb", "1337", 21);
    employee1.IntroduceYourself();
}