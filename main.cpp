#include <iostream>

using namespace std;

void showMenu() {
    cout << "Hi This is Simple Calculator" << endl;
    cout << "1. Plus" << endl;
    cout << "2. Minus" << endl;
    cout << "3. Multiplied by" << endl;
    cout << "4. Divided by" << endl;
    cout << "Type a number of what you want to do";
}

int main() {

    showMenu();
    int num1, num2;
    int number;
    cin >> number;
    cin >> num1;
    cin >> num2;

    
    if (number == 1) {
        cout << num1 + num2;
    }
    if (number == 2) {
        cout << num1 - num2;
    }
    if (number == 3) {
        cout << num1 * num2;
    }
    if (number == 4) {
        cout << num1 / num2;
    }
    

    return 0;
}