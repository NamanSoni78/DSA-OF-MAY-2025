#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Number Of  Rows: ";
    int num;
    cin >> num;
    int row = 1;
    int col = 1;
    while (row <= num)
    {
        int space = num - row;
        int star = row;
        while (star < num)
        {
            cout << " ";
            star++;
        }
        while (space < num)
        {
            cout << "*";
            space++;
        }
        col++;
        cout << endl;
        row++;
    }
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
