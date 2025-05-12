#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows x Cols: ";
    int num;
    cin>>num;
    int i = 1;
    int j=1;
    while(i<=num){
        j=1;
        while(j<=num){
            cout<<j << " ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
