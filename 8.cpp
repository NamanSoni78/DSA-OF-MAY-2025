#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows x Cols: ";
    int num;
    cin>>num;
    int i = 1;
    int o = 1;
    while(i<=num){
        while(o<=num){
            cout<<"*";
            o++;
        }
        cout<<endl;
        o = 1;
        i++;
    }
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}