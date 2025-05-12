#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main()
{
    std::string isPow;
    cout<<"Check Weather Number is power of 2 or not..."<<endl;
    cout<<"Enter The Number"<<endl;
    int num = 12;
    cin>>num;
    for (int i =0 ; i<=30 ; i++){
        int ans = pow(2,i);
        if (ans == num){
            isPow = "True";
            break;
        }
        else{
            isPow = "False";
        }

    }
    cout<<isPow<<endl;
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
