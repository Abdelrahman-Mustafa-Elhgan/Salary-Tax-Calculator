#include <iostream>
using namespace std;


int main()
{
 
    int salary;
    cout << "Enter the monthly salary: " << endl;
    cin >> salary;

    if (salary >= 10000) {
        float tax = salary * 20 / 100;
        cout << "Your salary after tax is: " << salary - tax << endl;
    }
    else if (salary >= 6000 && salary < 10000) {
        float tax = salary * 15 / 100;
        cout << "Your salary after tax is: " << salary - tax << endl;
    }
    else if (salary >= 3000 && salary < 6000) {
        float tax = salary * 10 / 100;
        cout << "Your salary after tax is: " << salary - tax << endl;
    }
    else {
        cout << "No tax" << endl;
    }

    return 0;


}
