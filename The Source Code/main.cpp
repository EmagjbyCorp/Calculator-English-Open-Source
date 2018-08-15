#include <iostream>

using namespace std;

int main()
{
    cout << "Hi, This is old school calculator version 1.0 <ENGLISH>" << endl << "+ = plus, - = minus, / = divided, * = multiplied" << endl << " " << endl;

    float num001;
    float num002;
    float result;

    string operation;
    string solve;

    cout << "Type the first Number: ";
    cin >> num001;
    cout << endl;

    cout << "Operation: ";
    cin >> operation;
    cout << endl;

    cout << "Type the second Number: ";
    cin >> num002;
    cout << endl;

    if (operation == "+") {
        result = num001 + num002;
        cout << num001 << " + " << num002 << " = " << result << endl << endl;
    } else if (operation == "-") {
        result = num001 - num002;
        cout << num001 << " - " << num002 << " = " << result << endl << endl;
    } else if (operation == "/") {
        result = num001 / num002;
        cout << num001 << " / " << num002 << " = " << result << endl << endl;
    } else if (operation == "*") {
        result = num001 * num002;
        cout << num001 << " * " << num002 << " = " << result << endl << endl;
    } else {
        cout << " !!!Error 001!!! ";
        cout << "Do You Wanna Solve? ";
        cin >> solve;
        if (solve == "yes" || solve == "Yes"){
            cout << "Loading . . ." << endl;
            cout << "Problem solved: You typed invalid operation!" << endl << endl << endl << endl;
        } else {
            return 0;
        }
    }

    cout << "You can find other languages of this calculator on github!" << endl << endl << endl;
}
