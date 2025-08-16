#include "iostream"
using namespace std;

// [CALCULATOR PRACTICE]

int main()
{
    short x;
    short y;
    char operate;

    cout << "Calculator Program Made Easy!" << endl;
    cout << endl << "----------------------------" << endl;

    cout << endl << "Enter the First Value: ";  
    cin >> x;

    cout << "And now the Second Value: ";
    cin >> y;

    cout << "Select which operation to be used ( + - * / % ): ";
    cin >> operate;

    int sumOfValues = x + y;
    int differenceOfValues = x - y;
    int productOfValues = x * y;
    int divisionOfValues = x / y;
    int modulusOperator = x % y;

    switch (operate){
        case '+':
            cout << endl << "The sum of the values " << x << " & " << y << "is " << sumOfValues << endl;
    }
    switch (operate){
        case '-':
            cout << endl << "The difference of the values " << x << " & " << y << "is " << differenceOfValues << endl;
    }
    switch (operate){
        case '*':
            cout << endl << "The product of the values " << x << " & " << y << "is " << productOfValues << endl;
    }
    switch (operate){
        case '/':
            cout << endl << "The quotient of the values " << x << " & " << y << "is " << divisionOfValues;
            if (divisionOfValues % 2 == 0)
                cout << " and is divisible by 2." << endl;
            else
                cout << " and is an odd number." << endl;
    }
    switch (operate){
        case '%':
            cout << endl << "The remainder of the values " << x << '&' << y << "is " << modulusOperator << endl;
        }

    return 0;
}