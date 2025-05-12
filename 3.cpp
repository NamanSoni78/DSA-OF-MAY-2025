#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter The Number: ";
    int num;
    cin>>num;
    int i = 1;
    while(i<=num){
        cout<<i << " ";
        i++;
    }
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
