#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter Number Of  Rows: ";
    int num;
    cin>>num;
    int i = 1;
    int j=1;
    
    while(i<=num){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


    system("pause");
}
