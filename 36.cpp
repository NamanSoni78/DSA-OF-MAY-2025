#include <iostream>
using namespace std;
#include <string>
string isPrime(int n){
    if (n==1 || n==0 || n<0){
        return "Nahi Pata";
    }
    for (int i=2 ; i<n ; i++){
        if (n%i == 0){
            return "false";
        }
    }
    return "True";
}



int main()
{
    cout<<"Enter The You Want To Check Prime or Not: ";
    int num;
    cin>>num;
    cout << isPrime(num)<<endl;
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
    