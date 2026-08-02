// static variable 

// function

// #include<iostream>
// using namespace std;

// void fun(int n){
//     static int x = 1;
//     if(n>0){
//     cout << x ;
//     x++ ;
//     return fun(n-1);
//     }
// }
                 
// int main() {
//     fun(5) ;       
//     return 0;
// }

// class - error

// #include<iostream>
// using namespace std;

// class A {
// public :
//     static int x ;

//     void incX(){
//         x = x+1 ;
//     }

// };
                 
// int main() {
//     A obj1,obj2 ;
//     obj1.x = 100 ;
//     cout << obj1.x << endl ;
//     cout << obj2.x << endl ;        
//     return 0;
// }

// static object

#include<iostream>
using namespace std;

class Check {
public :
    Check(){
        cout << "Constructor \n" ;
    }

    ~Check(){
        cout << "Destructor \n" ;
    }
};
                 
int main() {
    if (true)
    {
        // Check obj ;
        static Check obj ;
    }

    cout << "End of main Function \n" ;
            
    return 0;
}