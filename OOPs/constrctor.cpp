// #include<iostream>
// #include<string>
// using namespace std;

// class student{
// public :
//     string name ;
//     double* cgpaPtr ;

//     student(string name , double cgpa){
//         this-> name = name;
//         cgpaPtr = new double ; // dynamic allocation
//         *cgpaPtr = cgpa ;
//     }

//     // deep copy constructor 
//     student (student &obj){
//         this-> name = obj.name ;
//         cgpaPtr = new  double ;
//         *cgpaPtr = *(obj.cgpaPtr);
//     }

//     void getInfo(){
//         cout << "Name :" << name << endl ;
//         cout << "CGPA :" << *cgpaPtr << endl;
//     }
// };

                 
// int main() {
//     student s1("Rushi" , 9.35);
//     student s2(s1);
//     s1.getInfo() ;
//     s2.name = "Sakshi" ;
//     *(s2.cgpaPtr) = 9.14 ;
//     cout << "After Deep COpy " << endl ;
//     s1.getInfo();
//     s2.getInfo();
//     return 0;
// }

// destructor concept 

#include<iostream>
#include<string>
using namespace std;

class student{
public :
    string name ;
    double* cgpaPtr ;

    student(string name , double cgpa){
        this-> name = name;
        cgpaPtr = new double ; // dynamic allocation
        *cgpaPtr = cgpa ;
    }

    // deconstructor 

    ~student() {
        cout << "Deconstructor called" << endl ;
        delete cgpaPtr ;
    }

    void getInfo(){
        cout << "Name :" << name << endl ;
        cout << "CGPA :" << *cgpaPtr << endl;
    }
};

                 
int main() {
    student s1("Rushi" , 9.35);
    s1.getInfo() ;
    return 0;
}