#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter The Value of A: ";
    cin >> a;
    cout << "Enter The Value of B: ";
    cin >> b;

    if (a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else
    {
        if (a == b)
        {
            cout << "A is Equal to B" << endl;
        }
        else
        {
            if (a < b)
            {
                cout << "B is greater than A" << endl;
            }
            else
            {
                cout << "Enter A Vaild Integer" << endl;
            }
        }
    }
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}