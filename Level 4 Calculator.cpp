#include "iostream"
#include "fstream"
using namespace std;

// [CALCULATOR WITH STRUCTURES]

// Variables
typedef struct values
{
    short x;
    short y;
} toSolve;

typedef struct solution
{
    int sumOfValues;
    int differenceOfValues;
    int productOfValues;
    int divisionOfValues;
} toCompute;

char operate;

// Functions to be called later
void interface();
void menu();
int solveSum(short addOne, short addTwo);
int solveDifference(short diffOne, short diffTwo);
int solveProduct(short prodOne, short prodTwo);
int solveQuotient(short quoOne, short quoTwo);

void interface()
{
    cout << "Welcome to the Calculator made HARDER FUUUUCKK!" << endl;
    cout << endl << "-----------------------------" << endl << endl;
}

void menu()
{
    toSolve value;
    toCompute compute;

    cout << "Enter the First Digit: ";
    cin >> value.x;

    cout << "Enter the Second Digit: ";
    cin >> value.y;

    cout << endl << "FIRST DIGIT: " << value.x << endl;
    cout << "SECOND DIGIT: " << value.y << endl;

    cout << "Choose an Operator ( + - * / ): ";
    cin >> operate;

    switch (operate)
    {
        case '+':
            compute.sumOfValues = solveSum(value.x,value.y);
            cout << compute.sumOfValues;
            cout << endl;
    }

    switch (operate)
    {
        case '-':
            compute.differenceOfValues = solveDifference(value.x,value.y);
            cout << compute.differenceOfValues;
            cout << endl;
    }

    switch (operate)
    {
        case '*':
            compute.productOfValues = solveProduct(value.x,value.y);
            cout << compute.productOfValues;
            cout << endl;
    }

    switch (operate)
    {
        case '/':
            compute.divisionOfValues = solveQuotient(value.x,value.y);
            cout << compute.divisionOfValues;

            if (compute.divisionOfValues % 2 == 0)
                cout << " and is an even number.";
            else
                cout << " and is an odd number.";

            cout << endl;
    }

}

int solveSum(short addOne, short addTwo)
{
    toCompute answer;
    cout << endl << "The sum of the values " << addOne << " & " << addTwo << " is ";
    return (answer.sumOfValues = addOne + addTwo);
}

int solveDifference(short diffOne, short diffTwo)
{
    toCompute answer;
    cout << endl << "The difference of the values " << diffOne << " & " << diffTwo << " is ";
    return (answer.differenceOfValues = diffOne - diffTwo);
}

int solveProduct(short prodOne, short prodTwo)
{
    toCompute answer;
    cout << endl << "The product of the values " << prodOne << " & " << prodTwo << " is ";
    return (answer.productOfValues = prodOne * prodTwo);
}

int solveQuotient(short quoOne, short quoTwo)
{
    toCompute answer;
    cout << endl << "The quotient of the values " << quoOne << " & " << quoTwo << " is ";
    return (answer.divisionOfValues = quoOne / quoTwo);
}

int main()
{
    interface();
    menu();

    return 0;
}
