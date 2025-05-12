#include <iostream>
using namespace std;

int main()
{
    cout<<"Binary compliment Finder"<<endl;
    cout<<"Enter decimal Number: ";
    int n;
    cin>>n;
    int m = n;
    int mask =0;
    while(m!=0){
        mask = (mask << 1)|1;
        m = m >> 1 ;
    };
    int ans=(~n)& mask;
    cout<<ans<< endl;

    
    cout << "Press Enter to exit...";
    cin.ignore(); // Waits for user input
    cin.get();
    return 0;
}
