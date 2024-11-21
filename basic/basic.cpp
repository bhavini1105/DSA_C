/*
DSA - Data Structure and Algorithm
Data Structures: These are ways to organize and store datato use it  efficiently
Algorithms: These are step-by-step instructions or methods to solve problems

Problem-Solving: Helps in solving complex real-world problems efficiently.
Optimized Solutions: Ensures programs run faster and use less memory.

two types of data structres 
1. linear (Array , linked list ,stack , queue)
2. non-linear (tree ,graph,heap)

*/

// #include<iostream>
// using namespace std;

// int main(){

//     int x , y , sq ;

//     cout << "Enter The Value of x :" << endl;
//     cin >> x;

//     cout << "Enter The Value of y :" << endl;
//     cin >> y;

//     sq = (x*x) + 2 * x * y +(y*y);

//     cout << "Answer of (x+y)^2 is :"  << sq ;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int x , y , sq ;

//     cout << "Enter The Value of x :" << endl;
//     cin >> x;

//     cout << "Enter The Value of y :" << endl;
//     cin >> y;

//     sq = (x*x) - 2 * x * y + (y*y);

//     cout << "Answer of (x-y)^2 is :"  << sq ;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     int x , y , sq ;

//     cout << "Enter The Value of x :" << endl;
//     cin >> x;

//     cout << "Enter The Value of y :" << endl;
//     cin >> y;

//     sq = (x * x * x) + 3 * x  * x* y + 3 * y * y * x + (y * y * y);

//     cout << "Answer of (x-y)^2 is :"  << sq ;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     // Input values of a and b
//     cout << "Enter The Value of a: ";
//     cin >> a;
//     cout << "Enter The Value of b: ";
//     cin >> b;

//     // Swap values using a temporary variable c
//     c = a;
//     a = b;
//     b = c;

//     // Display swapped values
//     cout << "After Swapping Values: " << endl;
//     cout << "Value of a: " << a << endl;
//     cout << "Value of b: " << b << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input values of a and b
    cout << "Enter The Value of a: ";
    cin >> a;
    cout << "Enter The Value of b: ";
    cin >> b;

    // Swap values without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    cout << "After Swapping Values: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}

