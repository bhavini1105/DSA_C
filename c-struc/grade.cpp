#include<iostream>
using namespace std ;

int main(){

    int mark1 , mark2 , mark3, avg ;

    cout << "Enter Marks for first subject :" << endl ;
    cin >> mark1;
    
    cout << "Enter Marks for second subject :" << endl ;
    cin >> mark2;
    
    cout << "Enter Marks for third subject :" << endl ;
    cin >> mark3;

    avg = (mark1 + mark2 + mark3)/3;

    if (avg <= 90)
    {
        cout << "GRADE A";
    }
    else if (avg <= 80 && avg >90)
    {
        cout << "GRADE B";
    }
    else if (avg <= 70 && avg >80)
    {
        cout << "GRADE C";
    }
    else if (avg <= 60 && avg >70)
    {
        cout << "GRADE D";
    }
    else{
        cout << "FAIL";
    }
    
    

    return 0;
}
