#include <iostream>
using namespace std;
// OOP-Inheritance!!
class companyEmployee{
protected:
    string Name;
    int Age;
    int ExperienceYears;
    int DaysOFWork;
public:
    companyEmployee(string name, int age , int experience){
        Name=name;
        Age=age;
        ExperienceYears=experience;
    }
    void WorkingDays(){
        if(ExperienceYears>=5){
            DaysOFWork=4;
            cout<<Name<<" You have 4 working days "<<endl;
        }
        else{
            DaysOFWork=6;
            cout<<Name<<" You have 6 working days"<<endl;
        }
    }
};
class Employees: public companyEmployee{
public:
    int TimeInWork;
    Employees(string name, int age, int experience, int timeinwork) : companyEmployee(name,age,experience){
        TimeInWork=timeinwork;
    }
    void Time(){
        if(TimeInWork>=4){
            cout<<"And we appreciate your hard work!";
        }
    }
};
int main() {
    string name;
    int age,experience,time;
    cout<<"Enter your name:"; cin>>name;
    cout<<"Enter your age:"; cin>>age;
    cout<<"Enter your experience years:"; cin>>experience;
    cout<<"Enter your work time:"; cin>>time;
    Employees e1 = Employees (name,age,experience,time);
    e1.WorkingDays();
    e1.Time();
    return 0;
}