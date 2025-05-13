#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1 ; i<=n ; i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n , int r){
    int NCR = factorial(n)/(factorial(r)*factorial(n-r));
    return NCR;
}





int main()
{
    cout<<"Enter Value of n and r To find nCr: ";
    int n,r;
    cin>>n>>r;
    cout<<"nCr is "<< nCr(n,r) <<endl;


    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
