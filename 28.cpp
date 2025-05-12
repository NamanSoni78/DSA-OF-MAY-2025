#include <iostream>
using namespace std;

int main()
{
    cout << "Enter Number Of  Rows: ";
    int num;
    cin >> num;
    int row = 1;
    int col = 1;
    while(row<=num){
        col=row;
        while(col<=num){
            cout<<" ";
            col++;
        }
        col=row-2+num;
        int xz = num;
        while(xz-1<=col){
            cout<<row;
            xz++;

        }
        cout<<endl;
        row++;
    }
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
