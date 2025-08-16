#include "iostream"
#include "fstream"
using namespace std;

// [CALCULATOR WITH FUNCTIONS]

// Functions to call
void interface();
void menu();
int solveSum(short x, short y);
int solveDifference(short x, short y);
int solveProduct(short x, short y);
int solveQuotient(short x, short y);

// Global Variables
short x;
short y;
char operate;
int sumOfValues;
int differenceOfValues;
int productOfValues;
int divisionOfValues;

void interface()
{
    cout << "Welcome to the Calculator made HARD!" << endl;
    cout << endl << "-----------------------------" << endl << endl;
}

void menu()
{
    interface();

    cout << "Enter the First Digit: ";
    cin >> x;

    cout << "Enter the Second Digit: ";
    cin >> y;

    cout << endl << "FIRST DIGIT: " << x << endl;
    cout << "SECOND DIGIT: " << y << endl;

    cout << "Choose an Operator ( + - * / ): ";
    cin >> operate;

    switch (operate)
    {
        case '+':
            solveSum(x,y);
            cout << sumOfValues;
    }

    switch (operate)
    {
        case '-':
            solveDifference(x,y);
            cout << differenceOfValues;
    }

    switch (operate)
    {
        case '*':
            solveProduct(x,y);
            cout << productOfValues;
    }

    switch (operate)
    {
        case '/':
            solveQuotient(x,y);
            cout << divisionOfValues;
            if (divisionOfValues % 2 == 0)
                cout << " and is an even number.";
            else
                cout << " and is an odd number.";
    }
}

int solveSum(short x, short y)
{
    cout << endl << "The sum of the values " << x << " & " << y << " is ";
    return (sumOfValues = x + y);
}

int solveDifference(short x, short y)
{
    cout << endl << "The sum of the values " << x << " & " << y << " is ";
    return (differenceOfValues = x - y);
}

int solveProduct(short x, short y)
{
    cout << endl << "The product of the values " << x << " & " << y << " is ";
    return (productOfValues = x * y);
}

int solveQuotient(short x, short y)
{
    cout << endl << "The quotient of the values " << x << " & " << y << " is ";
    return (divisionOfValues = x / y);
}

int main()
{
    menu();

    return 0;
}
