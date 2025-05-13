#include <iostream>
using namespace std;
void Printcounting(int start , int end){
    for(int i=start ; i<=end ; i++){
        cout<<i<<endl;
    }
}
int main()
{
    cout<<"Enter From where to where counting has to print: ";
    int a ;
    int b;
    cin>>a>>b;
    Printcounting(a,b);
    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
