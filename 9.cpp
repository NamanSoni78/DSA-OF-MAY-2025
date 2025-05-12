#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number of Cols : ";
    int cols;
    cin>>cols;
    
    cout<<"Enter Number of Rows : ";
    int rows;
    cin>>rows;
    int ir = 1;
    while(ir<=rows){
        int ic=1;
        while(ic<=cols){
            cout<<ir;
            ic++;

        }
    cout<<endl;
    ir++;

    }



    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
