#include <iostream>
using namespace std;

int main()
{
    float initialBalance = 0;
    float deposit = 0;
    float withdraw = 0;

    cout << "Enter the Initial Balance: ";
    cin >> initialBalance;

    cout << "Enter the Deposit Amount: ";
    cin >> deposit;

    cout << "Enter the Withdrawal Amount: ";
    cin >> withdraw;

    initialBalance += deposit;
    cout << "Balance after Deposit: " << initialBalance << endl;
    initialBalance -= withdraw;
    cout << "Balance after Withdrawal: " << initialBalance << endl;

    return 0;
}