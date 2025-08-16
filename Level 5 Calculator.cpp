#include "iostream"
#include "fstream"
using namespace std;


// [CALCULATOR WITH FILE HANDLING]

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

void interface();
void menu();
int solveSum(short adding, short addoo);
int solveDifference(short diffee, short diffo);
int solveProduct(short prode, short prodo);
int solveQuotient(short quote, short quotation);
void fileSaving(toSolve value, toCompute compute, char operate);

void interface()
{
    cout << "Welcome to the Calculator made HARDER w/ Saved File!" << endl;
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
            break;
    }

    fileSaving(value, compute, operate);
}

int solveSum(short adding, short addoo)
{
    toCompute answer;
    cout << endl << "The sum of the values " << adding << " & " << addoo << " is ";
    return (answer.sumOfValues = adding + addoo);
}

int solveDifference(short diffee, short diffo)
{
    toCompute answer;
    cout << endl << "The difference of the values " << diffee << " & " << diffo << " is ";
    return (answer.differenceOfValues = diffee - diffo);
}

int solveProduct(short prode, short prodo)
{
    toCompute answer;
    cout << endl << "The product of the values " << prode << " & " << prodo << " is ";
    return (answer.productOfValues = prode * prodo);
}

int solveQuotient(short quota, short quotation)
{
    toCompute answer;
    cout << endl << "The quotient of the values " << quota << " & " << quotation << " is ";
    return (answer.divisionOfValues = quota / quotation);
}

void fileSaving(toSolve value, toCompute compute, char operate)
{
    ofstream file("Calculations.txt");

    if (file.is_open()) {
        file << "== == == == ANSWERS == == == ==\n" << endl;
        file << "First Value: " << value.x << "\n" << endl;
        file << "Second Value: " << value.y << "\n" << endl;

        switch (operate)
        {
            case '+':
                compute.sumOfValues = solveSum(value.x,value.y);
                file << compute.sumOfValues;
                file << endl;
        }

        switch (operate)
        {
            case '-':
                compute.differenceOfValues = solveDifference(value.x,value.y);
                file << compute.differenceOfValues;
                file << endl;
        }

        switch (operate)
        {
            case '*':
                compute.productOfValues = solveProduct(value.x,value.y);
                file << compute.productOfValues;
                file << endl;
        }

        switch (operate)
        {
            case '/':
                compute.divisionOfValues = solveQuotient(value.x,value.y);
                file << compute.divisionOfValues;

                if (compute.divisionOfValues % 2 == 0)
                    file << " and is an even number.";
                else
                    file << " and is an odd number.";

                file << endl;
        }

        file.close();
        cout << "Successfully saved!" << endl;
    }
    else {
        cout << "Error and not saved!" << endl;
    }
}

int main()
{
    interface();
    menu();

    return 0;
}
