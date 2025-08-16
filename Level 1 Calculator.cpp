#include "iostream"
using namespace std;

// [Level 1 - TOTAL VALUES PRACTICE]

int main()
{
    short x;
    short y;

    cout << "Print the Total of the Values" << endl;
    cout << endl << "--------------------------" << endl;

    cout << endl << "Enter the First Value: ";
    cin >> x;
    cout << endl << "Enter the Second Value: ";
    cin >> y;

    int sumOfValues = x + y;
    int differenceOfValues = x - y;
    int productOfValues = x * y;
    int divisionOfValues = x / y;

    cout << endl << "The sum of the values: " << sumOfValues << endl;
    cout << endl << "The difference of the values: " << differenceOfValues << endl;
    cout << endl << "The product of the values: " << productOfValues << endl;
    cout << endl << "The quotient of the values: " << divisionOfValues;

    if (divisionOfValues % 2 == 0)
        cout << " and is divisible by 2.";
    else
        cout << " and is an odd number." << endl;

    return 0;
}
