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
        col=row-2+num;
        int xz = num;
        while(xz<=col){
            cout<<" ";
            xz++;

        }
        col=row;
        while(col<=num){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    
    system("pause");
}
