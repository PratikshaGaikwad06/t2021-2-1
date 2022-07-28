#include <iostream>
#include <math.h>
using namespace std;

class Calculator{
    public: 
        double add(double a, double b)
        {
            return a + b;
        }
        double subtract(double a, double b)
        {
            return a - b;
        }
        double multiply(double a, double b)
        {
            return a * b;
        }
        double divide(double a, double b)
        {
            if (b == 0)
            {
                cout << "Division By Zero" << endl;
                return INFINITY;
            }
            else
            {
                return a / b;
            }
        }
    
};


int main() {
    double a,b;
    cin >> a >> b;
    
    string typeOfOperation;
    
    Calculator cal;
    cout << "Enter type of operation :" <<
    "\nEnter Addition to add 2 numbers" <<
    "\nEnter Subtraction to subtract numbers" <<
    "\nEnter Multiplication to multiply 2 numbers" <<
    "\nEnter Division to divide 2 numbers" << endl;
    
    cin >> typeOfOperation;
    int c;
    if(typeOfOperation == "Addition")
    {
        c = 1;
    }
    else if(typeOfOperation == "Subtraction")
    {
        c = 2;
    }
    else if(typeOfOperation == "Multiplication")
    {
        c = 3;
    }
    else if(typeOfOperation == "Division")
    {
        c = 4;
    }
    else{
        cout << "Invalid String";
        return 0;
    }
    
    switch(c)
    {
        case 1:
        cout <<cal.add(a,b);
        break;
        case 2:
        cout <<cal.subtract(a,b);
        break;
        case 3:
        cout <<cal.multiply(a,b);
        break;
        case 4:
        cout <<cal.divide(a,b);
        break;
    }
	return 0;
}
