#include "iostream"
#include "fstream"
using namespace std;


// [CALCULATOR WITH 4 PILLARS OF OOP]

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

struct ForOperation
{
    char operate;
};

class Solving
{
    public:
        virtual void interface() = 0;
        virtual void menu() = 0;
        virtual ~Solving() {};
        int solveSum(short adding, short addoo);
        int solveDifference(short diffee, short diffo);
        int solveProduct(short prode, short prodo);
        int solveQuotient(short quote, short quotation);
        void fileSaving(toSolve value, toCompute compute, ForOperation op);
};

class Polymorphism: public Solving
{
    public:
        void interface() override
        {
            cout << "Welcome to the Calculator made HARDEST w/ Saved File!" << endl;
            cout << endl << "-----------------------------" << endl << endl;
        }

        void menu() override
        {
            toSolve value;
            toCompute compute;
            ForOperation op;

            cout << "Enter the First Digit: ";
            cin >> value.x;

            cout << "Enter the Second Digit: ";
            cin >> value.y;

            cout << endl << "FIRST DIGIT: " << value.x << endl;
            cout << "SECOND DIGIT: " << value.y << endl;

            cout << "Choose an Operator ( + - * / ): ";
            cin >> op.operate;

            switch (op.operate)
            {
                case '+':
                    compute.sumOfValues = solveSum(value.x,value.y);
                    cout << compute.sumOfValues;
                    cout << endl;
            }

            switch (op.operate)
            {
                case '-':
                    compute.differenceOfValues = solveDifference(value.x,value.y);
                    cout << compute.differenceOfValues;
                    cout << endl;
            }

            switch (op.operate)
            {
                case '*':
                    compute.productOfValues = solveProduct(value.x,value.y);
                    cout << compute.productOfValues;
                    cout << endl;
            }

            switch (op.operate)
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

            fileSaving(value, compute, op);
        }
};

int Solving::solveSum(short adding, short addoo)
{
    toCompute answer;
    cout << endl << "The sum of the values " << adding << " & " << addoo << " is ";
    return (answer.sumOfValues = adding + addoo);
}

int Solving::solveDifference(short diffee, short diffo)
{
    toCompute answer;
    cout << endl << "The difference of the values " << diffee << " & " << diffo << " is ";
    return (answer.differenceOfValues = diffee - diffo);
}

int Solving::solveProduct(short prode, short prodo)
{
    toCompute answer;
    cout << endl << "The product of the values " << prode << " & " << prodo << " is ";
    return (answer.productOfValues = prode * prodo);
}

int Solving::solveQuotient(short quota, short quotation)
{
    toCompute answer;
    cout << endl << "The quotient of the values " << quota << " & " << quotation << " is ";
    return (answer.divisionOfValues = quota / quotation);
}

void Solving::fileSaving(toSolve value, toCompute compute, ForOperation op)
{
    ofstream file("Calculations.txt");

    if (file.is_open()) {
        file << "== == == == ANSWERS == == == ==\n" << endl;
        file << "First Value: " << value.x << "\n" << endl;
        file << "Second Value: " << value.y << "\n" << endl;

        switch (op.operate)
        {
            case '+':
                compute.sumOfValues = solveSum(value.x,value.y);
                file << compute.sumOfValues;
                file << endl;
        }

        switch (op.operate)
        {
            case '-':
                compute.differenceOfValues = solveDifference(value.x,value.y);
                file << compute.differenceOfValues;
                file << endl;
        }

        switch (op.operate)
        {
            case '*':
                compute.productOfValues = solveProduct(value.x,value.y);
                file << compute.productOfValues;
                file << endl;
        }

        switch (op.operate)
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
    Solving *x = new Polymorphism();
    x -> interface();
    x -> menu();
    return 0;
}
