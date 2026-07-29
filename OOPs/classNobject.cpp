// object oriented programming

// Class

// #include<iostream>
// #include<string>
// using namespace std;

// class teacher{
//     // properties
// private :
//     double salary ;
// public:     // private , protected 
//     string name ;
//     string dept ;
//     string subject ;

//     // methods / member function 
//     void changeDept(string newDept){
//         dept = newDept ;
//     }

//     double salaryTax(int salary){
//         int tax ;
//         tax = salary*0.18 ;
//         return tax ;
//     }
//     // setter
//     void setSalary(int s){
//         salary = s ;
//     }
//     // getter
//     double getSalary(){
//         return salary ;
//     }

//     // constructor
    
//     // parameterized constructor
//     teacher(string name , string dept , string subject ,double salary){
//             this-> name = name ;
//             this-> dept = dept ;
//             this-> subject = subject ;
//             this-> salary = salary ;
//     }

//     // custom contructor
//     teacher(teacher &orgObj){
//         cout << "custom constructor called" << endl ;
//         this->name = orgObj.name ;
//         this->dept = orgObj.dept ;
//         this->subject = orgObj.subject ;
//         this->salary = orgObj.salary ;
//     }
//     void getInfo(){
//         cout << "Name : " << name << endl ;
//         cout << "Department : " << dept << endl ;
//         cout << "Subject : " << subject << endl ;
//         cout << "Salary : " << salary << endl ;
//     }

// };

// class account
// {
// private:
//     double balance ;
//     string password ;
// public:
//     string accountId ;
//     string username ;

//     account(){
//         cout << "Account constructor called" << endl ;
//     }
    
// };

                 
// int main() {
//     teacher t1("Shraddha","Comp Science","DSA",20000) ;  // constructor call 
//     // t1.name = "Mrs. Jagdale" ; 
//     // t1.subject = "DMCS" ;
//     // t1.setSalary(25000) ; 

//     // account a1 ;
//     // a1.accountId = "123456" ;

//     // cout << "Account ID : " << a1.accountId << endl ;

//     teacher t2(t1) ;
//     t2.getInfo() ;
    
//     // cout << t1.name << endl ;
//     // cout << t1.dept << endl ;
//     // cout << t1.subject << endl ;
//     // cout <<t1.getSalary() << endl ;
//     return 0;
// }