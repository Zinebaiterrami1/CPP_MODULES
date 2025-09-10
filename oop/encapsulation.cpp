#include <iostream>
using std::string;
using std::cout;

class AbstractEmployee
{
    virtual void askPromotion() = 0;
};

class Employee:AbstractEmployee
{
    private:
        string Name;
        string Company;
        int Age;
    public:
        /*getters and setters*/
        void setName(string name)
        {
            Name = name;
        }
        string getName()
        {
            return (Name);
        }
        void setCompany(string company)
        {
            Company = company;
        }
        string getCompany()
        {
            return (Company);
        }        
        void setAge(int age)
        {
            if(age >= 18)
                Age = age;
        }
        int getAge()
        {
            return (Age);
        }
        /*getter and setter*/
        /*now since the getters and setters are public everyone outside the class should access them*/
        void    IntroduceYourself()
        {
            cout << "Name - " << Name << std::endl;
            cout << "Company - " << Company << std::endl;
            cout << "Age - " << Age << std::endl;
        }
        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
        void askPromotion()
        {
            if(Age > 30)
                cout << Name << " Got Promoted ! Congrats\n";
            else
                cout << Name << ", Sorry No Promotion for you \n";
        }
};

class Developer:Employee
{

};

int main()
{
    Employee employee1 = Employee("zineb", "1337", 21);
    employee1.askPromotion();
    Employee employee2 = Employee("imane", "1337", 21);
    employee2.askPromotion();
    // employee1.IntroduceYourself();

    // employee1.setAge(10);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old...\n";
}