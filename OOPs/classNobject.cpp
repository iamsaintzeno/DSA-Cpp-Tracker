// object oriented programming

// Class

#include<iostream>
#include<string>
using namespace std;

class teacher{
    // properties
private :
    double salary ;
public:     // private , protected 
    string name ;
    string dept ;
    string subject ;

    // methods / member function 
    void changeDept(string newDept){
        dept = newDept ;
    }

    double salaryTax(int salary){
        int tax ;
        tax = salary*0.18 ;
        return tax ;
    }
    // setter
    void setSalary(int s){
        salary = s ;
    }
    // getter
    double getSalary(){
        return salary ;
    }

    // constructor
    teacher(){
        cout << "Constructor called" << endl ;
    }

};

class account
{
private:
    double balance ;
    string password ;
public:
    string accountId ;
    string username ;
    
};

                 
int main() {
    teacher t1 ;  // constructor call 
    t1.name = "Mrs. Jagdale" ; 
    t1.subject = "DMCS" ;
    t1.dept = "Computer Science" ;
    t1.setSalary(25000) ; 
    
    cout << t1.name << endl ;
    cout <<t1.getSalary() << endl ;
    return 0;
}