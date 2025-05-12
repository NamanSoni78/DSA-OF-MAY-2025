#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter The Conversion mode : (1)C to F or (2) F to C: ";
    int mode;
    cin>>mode;
    if (mode == 1)
    {
        cout<<"Enter C: ";
        float C;
        cin>>C;
        float F = (C*1.8)+32;
        cout<<"F = "<<F << endl;
    }
    else if(mode == 2){
        cout<<"Enter F: ";
        float F;
        cin>>F;
        float C = (F-32)*5/9;
                cout<<"C = "<<C << endl;
    }
    else{
        cout<<"Select Mode Using by Entering 1 or 2! " << endl;
    }
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
