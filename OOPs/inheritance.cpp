// jussstt using prop and function of base class into derived object  


// PUBLIC 
// #include<iostream>
// using namespace std;

// // base class
// class pearson {
// public :
//     string name ;
//     int age ;

//     // pearson(string name , int age){
//     //     this -> name = name ;
//     //     this -> age = age ;
//     // }
//     pearson(){
//         cout << "Base Class Constructor called " << endl ;
//     }
//     ~pearson(){
//         cout << "Base Class Destructor called" << endl ;
//     }
// };

// // inhrited derived class
// class student : public pearson {
// public :
//     int rollNo ;

//     void getInfo(){
//         cout <<"name : " << name << endl;
//         cout << "age : "<< age << endl;
//         cout << "rollNo : " << rollNo << endl;
//     }
//     student () {
//         cout << "Derived Class Constructor called" << endl ;
//     }
//     ~student () {
//         cout << "Derived Class Destructor called" << endl ;
//     }
// };
                 
// int main() {
//     student s1 ;
//     s1.name = "Rushi" ;
//     s1.age = 19 ;
//     s1.rollNo = 27 ;
//     s1.getInfo() ;    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // base class
// class pearson {
// public :
//     string name ;
//     int age ;

//     pearson(string name , int age){
//         this -> name = name ;
//         this -> age = age ;
//     }
    
// };

// // inhrited derived class
// class student : public pearson {
// public :
//     int rollNo ;

//     void getInfo(){
//         cout <<"name : " << name << endl;
//         cout << "age : "<< age << endl;
//         cout << "rollNo : " << rollNo << endl;
//     }
//     student (string name , int age , int rollNo) : pearson(name ,age){
//         this -> rollNo = rollNo ;
//     }
    
// };
                 
// int main() {
//     student s1("Rushi",19,27) ;
//     s1.getInfo() ;    
//     return 0;
// }


// MULTI LEVEL INHERITANCE
// #include<iostream>
// using namespace std;

// // base class
// class pearson {
// public :
//     string name ;
//     int age ;
//     pearson(){
//         cout << "Base Class Constructor called " << endl ;
//     }
// };

// // inhrited derived class
// class student : public pearson {
// public :
//     int rollNo ;
//     student () {
//         cout << "Derived Class Constructor called" << endl ;
//     }
// };

// class gradStud : public student {
// public :
//     float salary ;
//     void getInfo(){
//         cout <<"name : " << name << endl;
//         cout << "age : "<< age << endl;
//         cout << "rollNo : " << rollNo << endl;
//         cout << "Salary : " << salary << endl ;
//     }
//     gradStud(){
//         cout << "gardStud called" << endl ;
//     }
//     // gradStud(string name , int age , int rollNo , float salary){
//     //     this -> name = name ;
//     //     this -> age = age ;
//     //     this -> rollNo = rollNo ;
//     //     this -> salary = salary ;
//     // }
// };
                 
// int main() {
//     gradStud g1 ;
//     g1.name = "Rushi";
//     g1.age = 19 ;
//     g1.rollNo = 27 ;
//     g1.salary = 200000 ;
//     g1.getInfo();
//     return 0;
// }

// multiple inheritance 
// #include<iostream>
// using namespace std;

// class Pearson {
// public :
// string name ;
// int age ;

// };

// class Teacher : public Pearson {
// public :
//     string subject ;
// };

// class Student : public Pearson  {
// public :
//     int rollNo ;
// };
                 
// int main() {
//     Teacher t1 ;
//     t1.name = "Rushi" ;
//     t1.subject = "Maths" ;
//     cout << t1.name << endl ;
//     cout << t1.subject ;
//     return 0;
// }