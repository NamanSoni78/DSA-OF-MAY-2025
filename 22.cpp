#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows: ";
    int num;
    cin>>num;
    int row = 1;
    int col=1;
    int count=1;
    while(row<=num){
        col=1;
        while(col<=row){
            cout<<char('A' + count-1)<< " ";
            count++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
