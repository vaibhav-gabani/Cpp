#include<iostream>
using namespace std;

int main() {
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    if (num > 0) {
        // upside
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= num - i; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << "* ";
            }
            cout << endl;
        }
        // downside
        for (int i = num - 1; i >= 1; i--) {
            for (int j = 1; j <= num - i; j++) {
                cout << "  ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    } else {
        cout << "Enter Positive number..\n";
    }

    return 0;
}
